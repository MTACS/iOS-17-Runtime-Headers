
@protocol SetSubtitleStateIntentHandling <NSObject>

@required

- (void)handleSetSubtitleState:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetSubtitleStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetSubtitleStateIntentResponse *, void*
- (void)handleSetSubtitleState:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetSubtitleStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetSubtitleStateIntentResponse *, void*
- (void)resolveDeviceForSetSubtitleState:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetSubtitleStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetSubtitleStateDeviceResolutionResult *, void*
- (void)resolveDeviceForSetSubtitleState:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetSubtitleStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetSubtitleStateDeviceResolutionResult *, void*
- (void)resolveLanguageForSetSubtitleState:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetSubtitleStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetSubtitleStateLanguageResolutionResult *, void*
- (void)resolveLanguageForSetSubtitleState:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetSubtitleStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetSubtitleStateLanguageResolutionResult *, void*

@optional

- (void)confirmSetSubtitleState:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetSubtitleStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetSubtitleStateIntentResponse *, void*
- (void)confirmSetSubtitleState:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetSubtitleStateIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetSubtitleStateIntentResponse *, void*

@end
