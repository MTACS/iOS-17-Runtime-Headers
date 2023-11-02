
@interface SPOwnedCircleDataIntegrity : NSObject <NSCopying, NSSecureCoding> {
    SPDataIntegrityCheck * _circleRecord;
    NSArray * _estimatedLocations;
    NSArray * _itemSharingKey;
    SPDataIntegrityCheck * _keySyncRecord;
    NSArray * _observations;
    NSArray * _peerTrusts;
    SPSharedSecretsDataCheck * _sharedSecrets;
}

@property (nonatomic, copy) SPDataIntegrityCheck *circleRecord;
@property (nonatomic, copy) NSArray *estimatedLocations;
@property (nonatomic, copy) NSArray *itemSharingKey;
@property (nonatomic, copy) SPDataIntegrityCheck *keySyncRecord;
@property (nonatomic, copy) NSArray *observations;
@property (nonatomic, copy) NSArray *peerTrusts;
@property (nonatomic, copy) SPSharedSecretsDataCheck *sharedSecrets;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)circleRecord;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)estimatedLocations;
- (id)initWithCircleRecord:(id)arg1 peerTrusts:(id)arg2 sharedSecrets:(id)arg3 keySyncRecord:(id)arg4 observations:(id)arg5 itemSharingKey:(id)arg6 estimatedLocations:(id)arg7;
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
- (void)setSharedSecrets:(id)arg1;
- (id)sharedSecrets;

@end
