
@protocol INPlayMediaIntentHandling <NSObject>

@required

- (void)handlePlayMedia:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INPlayMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPlayMediaIntentResponse *, void*

@optional

- (void)confirmPlayMedia:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INPlayMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPlayMediaIntentResponse *, void*
- (void)resolveMediaItemsForPlayMedia:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INPlayMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolvePlayShuffledForPlayMedia:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INPlayMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*
- (void)resolvePlaybackQueueLocationForPlayMedia:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INPlayMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPlaybackQueueLocationResolutionResult *, void*
- (void)resolvePlaybackRepeatModeForPlayMedia:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INPlayMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPlaybackRepeatModeResolutionResult *, void*
- (void)resolvePlaybackSpeedForPlayMedia:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INPlayMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPlayMediaPlaybackSpeedResolutionResult *, void*
- (void)resolveResumePlaybackForPlayMedia:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INPlayMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*

@end
