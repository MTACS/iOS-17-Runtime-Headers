
@protocol WFSetWiFiIntentHandling <NSObject>

@required

- (void)handleSetWiFi:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetWiFiIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetWiFiIntentResponse *, void*
- (void)resolveOperationForSetWiFi:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetWiFiIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFBooleanSettingOperationResolutionResult *, void*
- (void)resolveStateForSetWiFi:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetWiFiIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*

@optional

- (void)confirmSetWiFi:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetWiFiIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetWiFiIntentResponse *, void*

@end
