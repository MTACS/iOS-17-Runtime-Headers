
@protocol HMDDoorbellBulletinUtilities <NSObject>

@required

+ (NSSet *)clipUUIDsForCoalesceableSignificantEvents:(NSSet *)arg1;
+ (NSSet *)faceClassificationsNearDateOfDoorbellPress:(NSDate *)arg1 forCameraProfile:(HMDCameraProfile *)arg2;
+ (NSString *)localizedAudioAccessoryAnnounceMessageForSignificantEvents:(NSSet *)arg1;
+ (NSString *)localizedDoorbellMessageForSignificantEvents:(NSSet *)arg1;
+ (NSString *)localizedMessageForCharacteristic:(HMDCharacteristic *)arg1;
+ (NSSet *)significantEventsRelevantToDoorbellPress:(NSDate *)arg1 forCameraProfile:(HMDCameraProfile *)arg2;

@end
