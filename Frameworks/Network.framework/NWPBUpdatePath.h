
@interface NWPBUpdatePath : PBCodable <NSCopying> {
    NWPBPath * _responsePath;
}

@property (nonatomic, readonly) bool hasResponsePath;
@property (nonatomic, retain) NWPBPath *responsePath;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResponsePath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responsePath;
- (void)setResponsePath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
