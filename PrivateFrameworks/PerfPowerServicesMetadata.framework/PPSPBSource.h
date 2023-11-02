
@interface PPSPBSource : PBCodable <NSCopying> {
    NSString * _source;
}

@property (nonatomic, readonly) bool hasSource;
@property (nonatomic, retain) NSString *source;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (void)writeTo:(id)arg1;

@end
