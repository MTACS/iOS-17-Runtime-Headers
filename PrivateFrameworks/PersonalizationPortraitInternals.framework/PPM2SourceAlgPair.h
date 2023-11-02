
@interface PPM2SourceAlgPair : PBCodable <NSCopying> {
    NSString * _algorithm;
    NSString * _source;
}

@property (nonatomic, retain) NSString *algorithm;
@property (nonatomic, readonly) bool hasAlgorithm;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic, retain) NSString *source;

- (void).cxx_destruct;
- (id)algorithm;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlgorithm;
- (bool)hasSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlgorithm:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (void)writeTo:(id)arg1;

@end
