
@interface NPKProtoRevokeShareForPassIdentifierRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int shouldCascade : 1; 
    }  _has;
    NSString * _passIdentifier;
    NSData * _shareData;
    bool  _shouldCascade;
}

@property (nonatomic) bool hasShouldCascade;
@property (nonatomic, retain) NSString *passIdentifier;
@property (nonatomic, retain) NSData *shareData;
@property (nonatomic) bool shouldCascade;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShouldCascade;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setHasShouldCascade:(bool)arg1;
- (void)setPassIdentifier:(id)arg1;
- (void)setShareData:(id)arg1;
- (void)setShouldCascade:(bool)arg1;
- (id)shareData;
- (bool)shouldCascade;
- (void)writeTo:(id)arg1;

@end
