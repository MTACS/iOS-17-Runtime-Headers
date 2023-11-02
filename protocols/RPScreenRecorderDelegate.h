
@protocol RPScreenRecorderDelegate <NSObject>

@optional

- (void)screenRecorder:(RPScreenRecorder *)arg1 didStopRecordingWithError:(NSError *)arg2 previewViewController:(RPPreviewViewController *)arg3;
- (void)screenRecorder:(RPScreenRecorder *)arg1 didStopRecordingWithPreviewViewController:(RPPreviewViewController *)arg2 error:(NSError *)arg3;
- (void)screenRecorderDidChangeAvailability:(RPScreenRecorder *)arg1;

@end
