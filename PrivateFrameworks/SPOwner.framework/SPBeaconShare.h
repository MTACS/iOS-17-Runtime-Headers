
@interface SPBeaconShare : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _beaconIdentifier;
    NSDate * _creationDate;
    NSDate * _expirationDate;
    NSUUID * _identifier;
    SPHandle * _owner;
    NSUUID * _peerTrustIdentifier;
    SPHandle * _sharee;
    NSUUID * _sharingCircleIdentifier;
    long long  _state;
}

@property (nonatomic, copy) NSUUID *beaconIdentifier;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) SPHandle *owner;
@property (nonatomic, copy) NSUUID *peerTrustIdentifier;
@property (nonatomic, copy) SPHandle *sharee;
@property (nonatomic, copy) NSUUID *sharingCircleIdentifier;
@property (nonatomic) long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)beaconIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 beaconIdentifier:(id)arg2 sharingCircleIdentifier:(id)arg3 peerTrustIdentifier:(id)arg4 owner:(id)arg5 sharee:(id)arg6 state:(long long)arg7 creationDate:(id)arg8 expirationDate:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)owner;
- (id)peerTrustIdentifier;
- (void)setBeaconIdentifier:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setPeerTrustIdentifier:(id)arg1;
- (void)setSharee:(id)arg1;
- (void)setSharingCircleIdentifier:(id)arg1;
- (void)setState:(long long)arg1;
- (id)sharee;
- (id)sharingCircleIdentifier;
- (long long)state;

@end
