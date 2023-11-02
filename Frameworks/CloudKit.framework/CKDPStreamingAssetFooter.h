
@interface CKDPStreamingAssetFooter : PBCodable <NSCopying> {
    NSData * _md5;
    int  _status;
}

@property (nonatomic, retain) NSData *md5;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)md5;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMd5:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
