
@interface PPSPBCadence : PBCodable <NSCopying> {
    NSMutableArray * _cadences;
}

@property (nonatomic, retain) NSMutableArray *cadences;

+ (Class)cadencesType;

- (void).cxx_destruct;
- (void)addCadences:(id)arg1;
- (id)cadences;
- (id)cadencesAtIndex:(unsigned long long)arg1;
- (unsigned long long)cadencesCount;
- (void)clearCadences;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCadences:(id)arg1;
- (void)writeTo:(id)arg1;

@end
