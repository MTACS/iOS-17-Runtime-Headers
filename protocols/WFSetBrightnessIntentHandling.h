
@protocol WFSetBrightnessIntentHandling <NSObject>

@required

- (void)handleSetBrightness:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetBrightnessIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetBrightnessIntentResponse *, void*
- (void)resolveValueForSetBrightness:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSetBrightnessIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetBrightnessValueResolutionResult *, void*

@optional

- (void)confirmSetBrightness:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSetBrightnessIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSetBrightnessIntentResponse *, void*

@end
