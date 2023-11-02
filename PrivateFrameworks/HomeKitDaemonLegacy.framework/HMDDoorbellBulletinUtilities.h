
@interface HMDDoorbellBulletinUtilities : HMFObject <HMDDoorbellBulletinUtilities, HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_localizedDoorbellMessageForSignificantEvents:(id)arg1 forAudioAccessory:(bool)arg2;
+ (id)_significantEventsWithinTimeWindowOfDoorbellPress:(id)arg1 forCameraProfile:(id)arg2;
+ (id)clipUUIDsForCoalesceableSignificantEvents:(id)arg1;
+ (id)faceClassificationsNearDateOfDoorbellPress:(id)arg1 forCameraProfile:(id)arg2;
+ (id)localizedAudioAccessoryAnnounceMessageForSignificantEvents:(id)arg1;
+ (id)localizedDoorbellMessageForSignificantEvents:(id)arg1;
+ (id)localizedMessageForCharacteristic:(id)arg1;
+ (id)logCategory;
+ (id)significantEventsRelevantToDoorbellPress:(id)arg1 forCameraProfile:(id)arg2;

@end
