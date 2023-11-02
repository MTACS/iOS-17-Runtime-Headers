
@interface OTAccountSettings : PBCodable <NSCopying> {
    OTWalrus * _walrus;
    OTWebAccess * _webAccess;
}

@property (nonatomic, readonly) bool hasWalrus;
@property (nonatomic, readonly) bool hasWebAccess;
@property (nonatomic, retain) OTWalrus *walrus;
@property (nonatomic, retain) OTWebAccess *webAccess;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasWalrus;
- (bool)hasWebAccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setWalrus:(id)arg1;
- (void)setWebAccess:(id)arg1;
- (id)walrus;
- (id)webAccess;
- (void)writeTo:(id)arg1;

@end
