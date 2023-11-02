
@interface PLFileSystemVolume : PLManagedObject {
    NSURL * _url;
}

@property (nonatomic, readonly) bool isOffline;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSSet *resources;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, retain) NSString *volumeUuidString;

+ (id)entityName;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)predictedURLForVolumeName:(id)arg1;
+ (id)volumeForObjectUUID:(id)arg1 context:(id)arg2;
+ (id)volumeForURL:(id)arg1 context:(id)arg2;
+ (id)volumeForVolumeUUID:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (void)_registerWithVolumeManager;
- (void)_unregisterWithVolumeManager;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)didTurnIntoFault;
- (bool)isOffline;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (id)predictedURL;
- (void)setUrl:(id)arg1;
- (bool)supportsCloudUpload;
- (void)unregisterWithVolumeManager;
- (id)url;
- (void)willTurnIntoFault;

@end
