
@interface PKProtobufShareableCredential : PBCodable <NSCopying> {
    NSString * _cardConfigurationIdentifier;
    NSString * _credentialIdentifier;
    NSString * _credentialIdentifierHash;
    NSString * _encryptedPushProvisioningTarget;
    struct { 
        unsigned int status : 1; 
    }  _has;
    NSString * _nonce;
    NSString * _ownerDisplayName;
    NSString * _sharingInstanceIdentifier;
    int  _status;
}

@property (nonatomic, retain) NSString *cardConfigurationIdentifier;
@property (nonatomic, retain) NSString *credentialIdentifier;
@property (nonatomic, retain) NSString *credentialIdentifierHash;
@property (nonatomic, retain) NSString *encryptedPushProvisioningTarget;
@property (nonatomic, readonly) bool hasCardConfigurationIdentifier;
@property (nonatomic, readonly) bool hasCredentialIdentifier;
@property (nonatomic, readonly) bool hasCredentialIdentifierHash;
@property (nonatomic, readonly) bool hasEncryptedPushProvisioningTarget;
@property (nonatomic, readonly) bool hasNonce;
@property (nonatomic, readonly) bool hasOwnerDisplayName;
@property (nonatomic, readonly) bool hasSharingInstanceIdentifier;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) NSString *nonce;
@property (nonatomic, retain) NSString *ownerDisplayName;
@property (nonatomic, retain) NSString *sharingInstanceIdentifier;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (id)cardConfigurationIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialIdentifier;
- (id)credentialIdentifierHash;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedPushProvisioningTarget;
- (bool)hasCardConfigurationIdentifier;
- (bool)hasCredentialIdentifier;
- (bool)hasCredentialIdentifierHash;
- (bool)hasEncryptedPushProvisioningTarget;
- (bool)hasNonce;
- (bool)hasOwnerDisplayName;
- (bool)hasSharingInstanceIdentifier;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nonce;
- (id)ownerDisplayName;
- (bool)readFrom:(id)arg1;
- (void)setCardConfigurationIdentifier:(id)arg1;
- (void)setCredentialIdentifier:(id)arg1;
- (void)setCredentialIdentifierHash:(id)arg1;
- (void)setEncryptedPushProvisioningTarget:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setNonce:(id)arg1;
- (void)setOwnerDisplayName:(id)arg1;
- (void)setSharingInstanceIdentifier:(id)arg1;
- (void)setStatus:(int)arg1;
- (id)sharingInstanceIdentifier;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
