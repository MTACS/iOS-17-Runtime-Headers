
@interface CKDVolume : NSObject {
    NSNumber * _deviceID;
    NSString * _mountPath;
    NSUUID * _volumeUUID;
}

@property (nonatomic, readonly) NSNumber *deviceID;
@property (nonatomic, readonly) bool isRootVolume;
@property (nonatomic, readonly) NSString *mountPath;
@property (nonatomic, readonly) NSUUID *volumeUUID;

+ (id)mountedVolumes;
+ (id)volumeForPath:(const char *)arg1;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (id)deviceID;
- (id)initWithVolumeUUID:(id)arg1 deviceID:(id)arg2 mountToPath:(id)arg3;
- (bool)isRootVolume;
- (id)mountPath;
- (id)volumeUUID;

@end
