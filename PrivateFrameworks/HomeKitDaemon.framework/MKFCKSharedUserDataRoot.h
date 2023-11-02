
@interface MKFCKSharedUserDataRoot : MKFCKSharedUserData <HMDCoreDataCloudTransformable>

@property (nonatomic, retain) NSSet *accessorySettings;
@property (nonatomic) bool activityNotificationsEnabledForPersonalRequests;
@property (nonatomic) bool allowExplicitContent;
@property (nonatomic) bool allowiTunesAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dolbyAtmosEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool losslessMusicEnabled;
@property (nonatomic, retain) NSSet *personsFromPhotos;
@property (nonatomic, copy) NSUUID *photosPersonDataZoneUUID;
@property (nonatomic) bool playbackInfluencesEnabled;
@property (nonatomic) bool sharePhotosFaceClassifications;
@property (nonatomic) bool siriIdentifyVoiceEnabled;
@property (readonly) Class superclass;

+ (bool)_importInsertOrUpdateWithObjectID:(id)arg1 context:(id)arg2;
+ (id)createWithHomeModelID:(id)arg1 persistentStore:(id)arg2 context:(id)arg3;
+ (bool)exportDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (bool)exportInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;
+ (bool)exportUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (id)fetchRequest;
+ (bool)importDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (bool)importInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;
+ (bool)importUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (id)rootKeyPath;

- (bool)_importSharedUserSettingsIntoLocalModel:(id)arg1 context:(id)arg2;
- (id)fetchEquivalentModels:(id*)arg1;
- (bool)importAccessorySettingsIntoLocalModel:(id)arg1 context:(id)arg2;
- (bool)importIntoLocalModel:(id)arg1 context:(id)arg2;
- (bool)importIntoLocalModelWithContext:(id)arg1;
- (bool)importPersonsIntoLocalModel:(id)arg1 context:(id)arg2;

@end
