
@protocol WFSetAppearanceIntentHandling <NSObject>

@required

- (void)handleSetAppearance:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetAppearanceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetAppearanceIntentResponse *, void*
- (void)resolveOperationForSetAppearance:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetAppearanceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFBooleanSettingOperationResolutionResult *, void*
- (void)resolveStyleForSetAppearance:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetAppearanceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFDeviceAppearanceTypeResolutionResult *, void*

@optional

- (void)confirmSetAppearance:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetAppearanceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetAppearanceIntentResponse *, void*

@end
