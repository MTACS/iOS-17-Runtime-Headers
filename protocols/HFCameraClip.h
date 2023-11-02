
@protocol HFCameraClip <HFCameraClipIdentifiable, HFCameraClipEvents, HFCameraRecordingEvent>

@required

- (double)duration;
- (long long)quality;
- (NSDate *)startDate;

@end
