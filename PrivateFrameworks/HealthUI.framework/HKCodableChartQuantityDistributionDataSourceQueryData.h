
@interface HKCodableChartQuantityDistributionDataSourceQueryData : PBCodable <NSCopying> {
    NSMutableArray * _quantityDistributionDatas;
}

@property (nonatomic, retain) NSMutableArray *quantityDistributionDatas;

+ (Class)quantityDistributionDataType;

- (void).cxx_destruct;
- (void)addQuantityDistributionData:(id)arg1;
- (void)clearQuantityDistributionDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)quantityDistributionDataAtIndex:(unsigned long long)arg1;
- (id)quantityDistributionDatas;
- (unsigned long long)quantityDistributionDatasCount;
- (bool)readFrom:(id)arg1;
- (void)setQuantityDistributionDatas:(id)arg1;
- (void)writeTo:(id)arg1;

@end
