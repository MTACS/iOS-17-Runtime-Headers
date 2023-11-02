
@interface PBBProtoSendTinkerAccountCredentials : PBCodable <NSCopying> {
    NSData * _acceptedTermsData;
    NSString * _pairingParentAltDSID;
    NSString * _pairingParentAppleID;
    NSString * _password;
    NSString * _username;
}

@property (nonatomic, retain) NSData *acceptedTermsData;
@property (nonatomic, readonly) bool hasAcceptedTermsData;
@property (nonatomic, readonly) bool hasPairingParentAltDSID;
@property (nonatomic, readonly) bool hasPairingParentAppleID;
@property (nonatomic, readonly) bool hasPassword;
@property (nonatomic, readonly) bool hasUsername;
@property (nonatomic, retain) NSString *pairingParentAltDSID;
@property (nonatomic, retain) NSString *pairingParentAppleID;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (id)acceptedTermsData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAcceptedTermsData;
- (bool)hasPairingParentAltDSID;
- (bool)hasPairingParentAppleID;
- (bool)hasPassword;
- (bool)hasUsername;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pairingParentAltDSID;
- (id)pairingParentAppleID;
- (id)password;
- (bool)readFrom:(id)arg1;
- (void)setAcceptedTermsData:(id)arg1;
- (void)setPairingParentAltDSID:(id)arg1;
- (void)setPairingParentAppleID:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (void)writeTo:(id)arg1;

@end
