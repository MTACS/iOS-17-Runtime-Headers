
@interface HKCodableStateOfMindDataSourceQueryData : PBCodable <NSCopying> {
    NSMutableArray * _valenceDistributionSummarys;
}

@property (nonatomic, retain) NSMutableArray *valenceDistributionSummarys;

+ (Class)valenceDistributionSummaryType;

- (void).cxx_destruct;
- (void)addValenceDistributionSummary:(id)arg1;
- (void)clearValenceDistributionSummarys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setValenceDistributionSummarys:(id)arg1;
- (id)valenceDistributionSummaryAtIndex:(unsigned long long)arg1;
- (id)valenceDistributionSummarys;
- (unsigned long long)valenceDistributionSummarysCount;
- (void)writeTo:(id)arg1;

@end
