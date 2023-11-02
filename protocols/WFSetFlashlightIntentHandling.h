
@protocol WFSetFlashlightIntentHandling <NSObject>

@required

- (void)handleSetFlashlight:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetFlashlightIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetFlashlightIntentResponse *, void*
- (void)resolveOperationForSetFlashlight:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetFlashlightIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFBooleanSettingOperationResolutionResult *, void*
- (void)resolveStateForSetFlashlight:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetFlashlightIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*
- (void)resolveValueForSetFlashlight:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetFlashlightIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetFlashlightValueResolutionResult *, void*

@optional

- (void)confirmSetFlashlight:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetFlashlightIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetFlashlightIntentResponse *, void*

@end
