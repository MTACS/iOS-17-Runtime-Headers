
@protocol PlayVideoIntentHandling <NSObject>

@required

- (void)handlePlayVideo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PlayVideoIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PlayVideoIntentResponse *, void*
- (void)handlePlayVideo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PlayVideoIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PlayVideoIntentResponse *, void*
- (void)resolveContentForPlayVideo:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: PlayVideoIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PlayVideoContentResolutionResult *, void*
- (void)resolveContentForPlayVideo:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: PlayVideoIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PlayVideoContentResolutionResult *, void*

@optional

- (void)confirmPlayVideo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PlayVideoIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PlayVideoIntentResponse *, void*
- (void)confirmPlayVideo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PlayVideoIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PlayVideoIntentResponse *, void*

@end
