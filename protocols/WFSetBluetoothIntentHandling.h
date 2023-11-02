
@protocol WFSetBluetoothIntentHandling <NSObject>

@required

- (void)handleSetBluetooth:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetBluetoothIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetBluetoothIntentResponse *, void*
- (void)resolveOperationForSetBluetooth:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetBluetoothIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFBooleanSettingOperationResolutionResult *, void*
- (void)resolveStateForSetBluetooth:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetBluetoothIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*

@optional

- (void)confirmSetBluetooth:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetBluetoothIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetBluetoothIntentResponse *, void*

@end
