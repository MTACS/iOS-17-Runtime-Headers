
@interface HKCodableSampleDataSourceQueryData : PBCodable <NSCopying> {
    NSMutableArray * _samples;
}

@property (nonatomic, retain) NSMutableArray *samples;

+ (Class)samplesType;

- (void).cxx_destruct;
- (void)addSamples:(id)arg1;
- (void)clearSamples;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)samples;
- (id)samplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)samplesCount;
- (void)setSamples:(id)arg1;
- (void)writeTo:(id)arg1;

@end
