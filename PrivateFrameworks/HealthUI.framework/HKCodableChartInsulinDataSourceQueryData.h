
@interface HKCodableChartInsulinDataSourceQueryData : PBCodable <NSCopying> {
    NSMutableArray * _basalInsulinValues;
    NSMutableArray * _totalInsulinValues;
}

@property (nonatomic, retain) NSMutableArray *basalInsulinValues;
@property (nonatomic, retain) NSMutableArray *totalInsulinValues;

+ (Class)basalInsulinValuesType;
+ (Class)totalInsulinValuesType;

- (void).cxx_destruct;
- (void)addBasalInsulinValues:(id)arg1;
- (void)addTotalInsulinValues:(id)arg1;
- (id)basalInsulinValues;
- (id)basalInsulinValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)basalInsulinValuesCount;
- (void)clearBasalInsulinValues;
- (void)clearTotalInsulinValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBasalInsulinValues:(id)arg1;
- (void)setTotalInsulinValues:(id)arg1;
- (id)totalInsulinValues;
- (id)totalInsulinValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)totalInsulinValuesCount;
- (void)writeTo:(id)arg1;

@end
