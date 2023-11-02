
@interface DAAlishaKeyInformation : NSObject <NSSecureCoding> {
    NSString * _invitationIdentifier;
    NSString * _localIdentifier;
    unsigned long long  _longTermSharedSecretLength;
    NSString * _name;
    bool  _onlineImmobilizerToken;
    NSString * _ownerIDSIdentifier;
    NSString * _pairedEntityIdentifier;
    NSData * _revocationAttestation;
    NSUUID * _sharingSessionUUID;
    NSArray * _supportedTransports;
    NSData * _trackingReceipt;
    DAAlishaKeyEncryptedRequest * _trackingRequest;
    bool  _vehicleSupportsSharingPassword;
}

@property (nonatomic, readonly) NSString *invitationIdentifier;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) unsigned long long longTermSharedSecretLength;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool onlineImmobilizerToken;
@property (nonatomic, readonly) NSString *ownerIDSIdentifier;
@property (nonatomic, readonly) NSString *pairedEntityIdentifier;
@property (nonatomic, readonly) NSData *revocationAttestation;
@property (nonatomic, readonly) NSUUID *sharingSessionUUID;
@property (nonatomic, readonly) NSArray *supportedTransports;
@property (nonatomic, readonly) NSData *trackingReceipt;
@property (nonatomic, readonly) DAAlishaKeyEncryptedRequest *trackingRequest;
@property (nonatomic, readonly) bool vehicleSupportsSharingPassword;

+ (bool)supportsSecureCoding;
+ (id)withEndpoint:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)invitationIdentifier;
- (id)localIdentifier;
- (unsigned long long)longTermSharedSecretLength;
- (id)name;
- (bool)onlineImmobilizerToken;
- (id)ownerIDSIdentifier;
- (id)pairedEntityIdentifier;
- (id)revocationAttestation;
- (id)sharingSessionUUID;
- (id)supportedTransports;
- (id)trackingReceipt;
- (id)trackingRequest;
- (bool)vehicleSupportsSharingPassword;

@end
