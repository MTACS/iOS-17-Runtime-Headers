
@interface HMAccessoryInfoProtoAccountInfoEvent : PBCodable <NSCopying> {
    NSString * _aaAltDSID;
    NSString * _amsAltDSID;
    struct { 
        unsigned int signedIn : 1; 
    }  _has;
    bool  _signedIn;
    NSString * _username;
}

@property (nonatomic, retain) NSString *aaAltDSID;
@property (nonatomic, retain) NSString *amsAltDSID;
@property (nonatomic, readonly) bool hasAaAltDSID;
@property (nonatomic, readonly) bool hasAmsAltDSID;
@property (nonatomic) bool hasSignedIn;
@property (nonatomic, readonly) bool hasUsername;
@property (nonatomic) bool signedIn;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (id)aaAltDSID;
- (id)amsAltDSID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAaAltDSID;
- (bool)hasAmsAltDSID;
- (bool)hasSignedIn;
- (bool)hasUsername;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAaAltDSID:(id)arg1;
- (void)setAmsAltDSID:(id)arg1;
- (void)setHasSignedIn:(bool)arg1;
- (void)setSignedIn:(bool)arg1;
- (void)setUsername:(id)arg1;
- (bool)signedIn;
- (id)username;
- (void)writeTo:(id)arg1;

@end
