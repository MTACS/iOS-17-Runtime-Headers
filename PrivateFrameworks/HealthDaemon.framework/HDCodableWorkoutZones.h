
@interface HDCodableWorkoutZones : PBCodable <HDDecoding, NSCopying> {
    HDCodableSample * _sample;
    NSData * _zones;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic, readonly) bool hasZones;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *zones;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSample;
- (bool)hasZones;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setSample:(id)arg1;
- (void)setZones:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zones;

@end
