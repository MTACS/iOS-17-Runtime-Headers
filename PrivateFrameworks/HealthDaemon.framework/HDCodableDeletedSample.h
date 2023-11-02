
@interface HDCodableDeletedSample : PBCodable <HKUUIDProvider, NSCopying> {
    HDCodableSample * _sample;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSample;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSample;
- (unsigned long long)hash;
- (id)hk_UUID;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setSample:(id)arg1;
- (void)writeTo:(id)arg1;

@end
