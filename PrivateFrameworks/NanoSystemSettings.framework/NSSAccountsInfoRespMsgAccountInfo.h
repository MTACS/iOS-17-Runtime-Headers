
@interface NSSAccountsInfoRespMsgAccountInfo : PBCodable <NSCopying> {
    bool  _aaIsManaged;
    bool  _aaPrimaryAccount;
    NSString * _altDSID;
    bool  _authenticated;
    NSString * _dSID;
    struct { 
        unsigned int aaIsManaged : 1; 
        unsigned int aaPrimaryAccount : 1; 
        unsigned int authenticated : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _type;
    NSString * _username;
}

@property (nonatomic) bool aaIsManaged;
@property (nonatomic) bool aaPrimaryAccount;
@property (nonatomic, retain) NSString *altDSID;
@property (nonatomic) bool authenticated;
@property (nonatomic, retain) NSString *dSID;
@property (nonatomic) bool hasAaIsManaged;
@property (nonatomic) bool hasAaPrimaryAccount;
@property (nonatomic, readonly) bool hasAltDSID;
@property (nonatomic) bool hasAuthenticated;
@property (nonatomic, readonly) bool hasDSID;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, readonly) bool hasUsername;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (bool)aaIsManaged;
- (bool)aaPrimaryAccount;
- (id)altDSID;
- (bool)authenticated;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dSID;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAaIsManaged;
- (bool)hasAaPrimaryAccount;
- (bool)hasAltDSID;
- (bool)hasAuthenticated;
- (bool)hasDSID;
- (bool)hasIdentifier;
- (bool)hasType;
- (bool)hasUsername;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAaIsManaged:(bool)arg1;
- (void)setAaPrimaryAccount:(bool)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setAuthenticated:(bool)arg1;
- (void)setDSID:(id)arg1;
- (void)setHasAaIsManaged:(bool)arg1;
- (void)setHasAaPrimaryAccount:(bool)arg1;
- (void)setHasAuthenticated:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)type;
- (id)username;
- (void)writeTo:(id)arg1;

@end
