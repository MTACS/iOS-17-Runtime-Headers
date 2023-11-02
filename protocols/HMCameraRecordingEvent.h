
@protocol HMCameraRecordingEvent <NSObject>

@required

- (NSDate *)dateOfOccurrence;
- (NSUUID *)uniqueIdentifier;

@end
