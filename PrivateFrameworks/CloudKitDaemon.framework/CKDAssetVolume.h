
@interface CKDAssetVolume : CKObject {
    NSNumber * _volumeIndex;
    NSUUID * _volumeUUID;
}

@property (nonatomic, retain) NSNumber *volumeIndex;
@property (nonatomic, retain) NSUUID *volumeUUID;

+ (id)CKSQLiteClassName;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (void)setVolumeIndex:(id)arg1;
- (void)setVolumeUUID:(id)arg1;
- (id)volumeIndex;
- (id)volumeUUID;

@end
