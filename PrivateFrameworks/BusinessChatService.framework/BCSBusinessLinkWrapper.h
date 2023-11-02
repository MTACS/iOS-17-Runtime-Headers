
@interface BCSBusinessLinkWrapper : PBCodable <NSCopying> {
    struct { 
        unsigned int modTime : 1; 
    }  _has;
    BCSBusinessLinkMessage * _message;
    long long  _modTime;
    NSString * _orgId;
}

@property (nonatomic, readonly) bool hasMessage;
@property (nonatomic) bool hasModTime;
@property (nonatomic, readonly) bool hasOrgId;
@property (nonatomic, retain) BCSBusinessLinkMessage *message;
@property (nonatomic) long long modTime;
@property (nonatomic, retain) NSString *orgId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessage;
- (bool)hasModTime;
- (bool)hasOrgId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)message;
- (long long)modTime;
- (id)orgId;
- (bool)readFrom:(id)arg1;
- (void)setHasModTime:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setModTime:(long long)arg1;
- (void)setOrgId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
