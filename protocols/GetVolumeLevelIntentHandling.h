
@protocol GetVolumeLevelIntentHandling <NSObject>

@required

- (void)handleGetVolumeLevel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: GetVolumeLevelIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GetVolumeLevelIntentResponse *, void*
- (void)handleGetVolumeLevel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: GetVolumeLevelIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GetVolumeLevelIntentResponse *, void*
- (void)resolveDeviceForGetVolumeLevel:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: GetVolumeLevelIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GetVolumeLevelDeviceResolutionResult *, void*
- (void)resolveDeviceForGetVolumeLevel:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: GetVolumeLevelIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GetVolumeLevelDeviceResolutionResult *, void*

@optional

- (void)confirmGetVolumeLevel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: GetVolumeLevelIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GetVolumeLevelIntentResponse *, void*
- (void)confirmGetVolumeLevel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: GetVolumeLevelIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GetVolumeLevelIntentResponse *, void*

@end
