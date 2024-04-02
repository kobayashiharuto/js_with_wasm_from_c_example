# Cから書いた WASM と JS でデータをやり取りするサンプル

## インストール

```
sudo apt install clang llvm lld lldb
```

## C->WASMコンパイル

```
clang --target=wasm32 -O3 -nostdlib -Wl,--no-entry -Wl,--export-all -o [WASMファイル名.wasm] [C言語ファイル名.c]
```

```
emcc toUpperCase.c -s WASM=1 -s EXPORTED_FUNCTIONS='["_toUpperCase", "_malloc", "_free"]' -s EXPORTED_RUNTIME_METHODS='["cwrap", "getValue", "setValue"]' -o toUpperCase.js
```

## サーバー起動

```
python3 -m http.server
```