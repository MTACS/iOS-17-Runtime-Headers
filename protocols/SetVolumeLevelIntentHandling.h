
@protocol SetVolumeLevelIntentHandling <NSObject>

@required

- (void)handleSetVolumeLevel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetVolumeLevelIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetVolumeLevelIntentResponse *, void*
- (void)handleSetVolumeLevel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetVolumeLevelIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetVolumeLevelIntentResponse *, void*
- (void)resolveDevicesForSetVolumeLevel:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetVolumeLevelIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveDevicesForSetVolumeLevel:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetVolumeLevelIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveVolumeLevelForSetVolumeLevel:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetVolumeLevelIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetVolumeLevelVolumeLevelResolutionResult *, void*
- (void)resolveVolumeLevelForSetVolumeLevel:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetVolumeLevelIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetVolumeLevelVolumeLevelResolutionResult *, void*

@optional

- (void)confirmSetVolumeLevel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetVolumeLevelIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetVolumeLevelIntentResponse *, void*
- (void)confirmSetVolumeLevel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetVolumeLevelIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetVolumeLevelIntentResponse *, void*

@end
