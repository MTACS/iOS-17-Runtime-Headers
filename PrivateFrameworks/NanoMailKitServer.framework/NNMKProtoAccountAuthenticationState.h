
@interface NNMKProtoAccountAuthenticationState : PBCodable <NSCopying> {
    NSString * _accountId;
    NSString * _displayName;
    NSString * _emailAddressToken;
    struct { 
        unsigned int standaloneState : 1; 
    }  _has;
    NSString * _pccEmailAddress;
    unsigned int  _standaloneState;
    NSString * _subsectionId;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *emailAddressToken;
@property (nonatomic, readonly) bool hasAccountId;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasEmailAddressToken;
@property (nonatomic, readonly) bool hasPccEmailAddress;
@property (nonatomic) bool hasStandaloneState;
@property (nonatomic, readonly) bool hasSubsectionId;
@property (nonatomic, retain) NSString *pccEmailAddress;
@property (nonatomic) unsigned int standaloneState;
@property (nonatomic, retain) NSString *subsectionId;

- (void).cxx_destruct;
- (id)accountId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)emailAddressToken;
- (bool)hasAccountId;
- (bool)hasDisplayName;
- (bool)hasEmailAddressToken;
- (bool)hasPccEmailAddress;
- (bool)hasStandaloneState;
- (bool)hasSubsectionId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pccEmailAddress;
- (bool)readFrom:(id)arg1;
- (void)setAccountId:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddressToken:(id)arg1;
- (void)setHasStandaloneState:(bool)arg1;
- (void)setPccEmailAddress:(id)arg1;
- (void)setStandaloneState:(unsigned int)arg1;
- (void)setSubsectionId:(id)arg1;
- (unsigned int)standaloneState;
- (id)subsectionId;
- (void)writeTo:(id)arg1;

@end
