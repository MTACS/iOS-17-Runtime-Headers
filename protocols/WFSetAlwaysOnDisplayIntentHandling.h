
@protocol WFSetAlwaysOnDisplayIntentHandling <NSObject>

@required

- (void)handleSetAlwaysOnDisplay:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetAlwaysOnDisplayIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetAlwaysOnDisplayIntentResponse *, void*
- (void)resolveOperationForSetAlwaysOnDisplay:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetAlwaysOnDisplayIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFBooleanSettingOperationResolutionResult *, void*
- (void)resolveStateForSetAlwaysOnDisplay:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetAlwaysOnDisplayIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*

@optional

- (void)confirmSetAlwaysOnDisplay:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetAlwaysOnDisplayIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetAlwaysOnDisplayIntentResponse *, void*

@end
