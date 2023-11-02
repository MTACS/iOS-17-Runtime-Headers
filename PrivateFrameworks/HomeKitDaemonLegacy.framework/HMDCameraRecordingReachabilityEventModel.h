
@interface HMDCameraRecordingReachabilityEventModel : HMBModel

@property (retain) NSDate *dateOfOccurrence;
@property bool reachable;
@property (retain) NSNumber *reachableField;

+ (id)hmbExternalRecordType;
+ (id)hmbProperties;

- (id)createEvent;
- (bool)reachable;
- (void)setReachable:(bool)arg1;

@end
