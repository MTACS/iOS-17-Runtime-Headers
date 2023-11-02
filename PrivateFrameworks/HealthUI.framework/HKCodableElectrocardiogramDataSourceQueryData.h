
@interface HKCodableElectrocardiogramDataSourceQueryData : PBCodable <NSCopying> {
    long long  _activeAlgorithmVersionRawValue;
    long long  _count;
    struct APPLE_HKCodableElectrocardiogramDataSourceQueryData_1 { 
        unsigned int activeAlgorithmVersionRawValue : 1; 
        unsigned int count : 1; 
    }  _has;
    NSMutableArray * _samples;
}

@property (nonatomic) long long activeAlgorithmVersionRawValue;
@property (nonatomic) long long count;
@property (nonatomic) bool hasActiveAlgorithmVersionRawValue;
@property (nonatomic) bool hasCount;
@property (nonatomic, retain) NSMutableArray *samples;

+ (Class)samplesType;

- (void).cxx_destruct;
- (long long)activeAlgorithmVersionRawValue;
- (void)addSamples:(id)arg1;
- (void)clearSamples;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActiveAlgorithmVersionRawValue;
- (bool)hasCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)samples;
- (id)samplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)samplesCount;
- (void)setActiveAlgorithmVersionRawValue:(long long)arg1;
- (void)setCount:(long long)arg1;
- (void)setHasActiveAlgorithmVersionRawValue:(bool)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setSamples:(id)arg1;
- (void)writeTo:(id)arg1;

@end
