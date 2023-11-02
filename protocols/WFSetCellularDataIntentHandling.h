
@protocol WFSetCellularDataIntentHandling <NSObject>

@required

- (void)handleSetCellularData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetCellularDataIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetCellularDataIntentResponse *, void*
- (void)resolveOperationForSetCellularData:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetCellularDataIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFBooleanSettingOperationResolutionResult *, void*
- (void)resolveStateForSetCellularData:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetCellularDataIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*

@optional

- (void)confirmSetCellularData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetCellularDataIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetCellularDataIntentResponse *, void*

@end
