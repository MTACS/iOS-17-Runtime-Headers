
@interface HMDMutableCameraRecordingSessionSignificantEvent : HMDCameraRecordingSessionSignificantEvent

@property unsigned long long confidenceLevel;
@property (copy) NSDate *dateOfOccurrence;
@property (copy) NSSet *faceClassifications;
@property (retain) NSData *faceCropData;
@property (retain) NSData *heroFrameData;
@property unsigned long long reason;
@property (copy) NSUUID *sessionEntityUUID;
@property double timeOffsetWithinClip;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
