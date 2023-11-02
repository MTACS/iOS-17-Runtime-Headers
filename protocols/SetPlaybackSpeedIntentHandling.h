
@protocol SetPlaybackSpeedIntentHandling <NSObject>

@required

- (void)handleSetPlaybackSpeed:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetPlaybackSpeedIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetPlaybackSpeedIntentResponse *, void*
- (void)handleSetPlaybackSpeed:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetPlaybackSpeedIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetPlaybackSpeedIntentResponse *, void*
- (void)resolveDevicesForSetPlaybackSpeed:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetPlaybackSpeedIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveDevicesForSetPlaybackSpeed:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetPlaybackSpeedIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolvePlaybackSpeedTypeForSetPlaybackSpeed:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetPlaybackSpeedIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PlaybackSpeedTypeResolutionResult *, void*
- (void)resolvePlaybackSpeedTypeForSetPlaybackSpeed:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetPlaybackSpeedIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PlaybackSpeedTypeResolutionResult *, void*
- (void)resolveSpeedMagnitudeForSetPlaybackSpeed:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetPlaybackSpeedIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetPlaybackSpeedSpeedMagnitudeResolutionResult *, void*
- (void)resolveSpeedMagnitudeForSetPlaybackSpeed:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetPlaybackSpeedIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetPlaybackSpeedSpeedMagnitudeResolutionResult *, void*

@optional

- (void)confirmSetPlaybackSpeed:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetPlaybackSpeedIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetPlaybackSpeedIntentResponse *, void*
- (void)confirmSetPlaybackSpeed:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetPlaybackSpeedIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetPlaybackSpeedIntentResponse *, void*

@end
