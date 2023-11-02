
@protocol WFSetLowPowerModeIntentHandling <NSObject>

@required

- (void)handleSetLowPowerMode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetLowPowerModeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetLowPowerModeIntentResponse *, void*
- (void)resolveOperationForSetLowPowerMode:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetLowPowerModeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFBooleanSettingOperationResolutionResult *, void*
- (void)resolveStateForSetLowPowerMode:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetLowPowerModeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*

@optional

- (void)confirmSetLowPowerMode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetLowPowerModeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetLowPowerModeIntentResponse *, void*

@end
