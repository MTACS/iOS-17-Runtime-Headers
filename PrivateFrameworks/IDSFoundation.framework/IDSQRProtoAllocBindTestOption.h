
@interface IDSQRProtoAllocBindTestOption : PBCodable <NSCopying> {
    NSMutableArray * _experimentOverrides;
}

@property (nonatomic, retain) NSMutableArray *experimentOverrides;

+ (Class)experimentOverridesType;

- (void).cxx_destruct;
- (void)addExperimentOverrides:(id)arg1;
- (void)clearExperimentOverrides;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentOverrides;
- (id)experimentOverridesAtIndex:(unsigned long long)arg1;
- (unsigned long long)experimentOverridesCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExperimentOverrides:(id)arg1;
- (void)writeTo:(id)arg1;

@end
