
@protocol WFSetAirplaneModeIntentHandling <NSObject>

@required

- (void)handleSetAirplaneMode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetAirplaneModeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetAirplaneModeIntentResponse *, void*
- (void)resolveOperationForSetAirplaneMode:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetAirplaneModeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFBooleanSettingOperationResolutionResult *, void*
- (void)resolveStateForSetAirplaneMode:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetAirplaneModeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*

@optional

- (void)confirmSetAirplaneMode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetAirplaneModeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetAirplaneModeIntentResponse *, void*

@end
