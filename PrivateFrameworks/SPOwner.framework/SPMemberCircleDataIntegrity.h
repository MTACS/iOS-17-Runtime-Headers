
@interface SPMemberCircleDataIntegrity : NSObject <NSCopying, NSSecureCoding> {
    SPDataIntegrityCheck * _circleRecord;
    NSArray * _estimatedLocations;
    NSArray * _itemSharingKey;
    SPDataIntegrityCheck * _keySyncRecord;
    NSArray * _observations;
    NSArray * _peerTrusts;
    SPDataIntegrityCheck * _sharedBeaconNameRecord;
    SPDataIntegrityCheck * _sharedBeaconOwnerName;
    SPDataIntegrityCheck * _sharedBeaconRecord;
    SPSharedSecretsDataCheck * _sharedSecrets;
}

@property (nonatomic, copy) SPDataIntegrityCheck *circleRecord;
@property (nonatomic, copy) NSArray *estimatedLocations;
@property (nonatomic, copy) NSArray *itemSharingKey;
@property (nonatomic, copy) SPDataIntegrityCheck *keySyncRecord;
@property (nonatomic, copy) NSArray *observations;
@property (nonatomic, copy) NSArray *peerTrusts;
@property (nonatomic, copy) SPDataIntegrityCheck *sharedBeaconNameRecord;
@property (nonatomic, copy) SPDataIntegrityCheck *sharedBeaconOwnerName;
@property (nonatomic, copy) SPDataIntegrityCheck *sharedBeaconRecord;
@property (nonatomic, copy) SPSharedSecretsDataCheck *sharedSecrets;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)circleRecord;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)estimatedLocations;
- (id)initWithCircleRecord:(id)arg1 sharedBeaconRecord:(id)arg2 sharedBeaconNameRecord:(id)arg3 sharedBeaconOwnerName:(id)arg4 peerTrusts:(id)arg5 sharedSecrets:(id)arg6 keySyncRecord:(id)arg7 observations:(id)arg8 itemSharingKey:(id)arg9 estimatedLocations:(id)arg10;
- (id)initWithCoder:(id)arg1;
- (id)itemSharingKey;
- (id)keySyncRecord;
- (id)observations;
- (id)peerTrusts;
- (void)setCircleRecord:(id)arg1;
- (void)setEstimatedLocations:(id)arg1;
- (void)setItemSharingKey:(id)arg1;
- (void)setKeySyncRecord:(id)arg1;
- (void)setObservations:(id)arg1;
- (void)setPeerTrusts:(id)arg1;
- (void)setSharedBeaconNameRecord:(id)arg1;
- (void)setSharedBeaconOwnerName:(id)arg1;
- (void)setSharedBeaconRecord:(id)arg1;
- (void)setSharedSecrets:(id)arg1;
- (id)sharedBeaconNameRecord;
- (id)sharedBeaconOwnerName;
- (id)sharedBeaconRecord;
- (id)sharedSecrets;

@end
