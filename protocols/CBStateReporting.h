
@protocol CBStateReporting

@required

- (long long)bluetoothState;
- (id /* block */)bluetoothStateChangedHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)setBluetoothStateChangedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
