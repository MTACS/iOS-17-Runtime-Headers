
@interface HMDCameraSignificantEventNotificationModel : HMBModel

@property (retain) HMBModelCloudReference *associatedClip;
@property (retain) NSNumber *confidenceLevel;
@property (retain) NSDate *dateOfOccurrence;
@property (retain) CKAsset *faceCropAsset;
@property (retain) CKAsset *heroFrameAsset;
@property (retain) NSDictionary *homePresenceByPairingIdentity;
@property (retain) NSNumber *significantEvent;
@property (retain) NSNumber *timeOffsetWithinClip;

+ (id)hmbExternalRecordType;
+ (id)hmbProperties;
+ (id)hmbQueries;
+ (id)significantEventsBetweenDatesQueryWithIsAscending:(bool)arg1;

- (id)createClipSignificantEventWithCameraProfileUUID:(id)arg1 faceClassification:(id)arg2;

@end
