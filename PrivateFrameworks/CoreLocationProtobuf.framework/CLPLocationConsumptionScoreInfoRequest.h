
@interface CLPLocationConsumptionScoreInfoRequest : PBRequest <NSCopying> {
    NSMutableArray * _locationConsumptionScoreInfos;
}

@property (nonatomic, retain) NSMutableArray *locationConsumptionScoreInfos;

+ (Class)locationConsumptionScoreInfoType;

- (void).cxx_destruct;
- (void)addLocationConsumptionScoreInfo:(id)arg1;
- (void)clearLocationConsumptionScoreInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationConsumptionScoreInfoAtIndex:(unsigned long long)arg1;
- (id)locationConsumptionScoreInfos;
- (unsigned long long)locationConsumptionScoreInfosCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocationConsumptionScoreInfos:(id)arg1;
- (void)writeTo:(id)arg1;

@end
