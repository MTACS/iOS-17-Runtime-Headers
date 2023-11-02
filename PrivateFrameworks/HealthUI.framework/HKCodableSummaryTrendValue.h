
@interface HKCodableSummaryTrendValue : PBCodable <NSCopying> {
    NSData * _analysisData;
    NSString * _coveredDateRangeRawValue;
    NSMutableArray * _dataPresencePoints;
}

@property (nonatomic, retain) NSData *analysisData;
@property (nonatomic, retain) NSString *coveredDateRangeRawValue;
@property (nonatomic, retain) NSMutableArray *dataPresencePoints;
@property (nonatomic, readonly) bool hasAnalysisData;
@property (nonatomic, readonly) bool hasCoveredDateRangeRawValue;

+ (Class)dataPresencePointsType;

- (void).cxx_destruct;
- (void)addDataPresencePoints:(id)arg1;
- (id)analysisData;
- (void)clearDataPresencePoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coveredDateRangeRawValue;
- (id)dataPresencePoints;
- (id)dataPresencePointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataPresencePointsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnalysisData;
- (bool)hasCoveredDateRangeRawValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnalysisData:(id)arg1;
- (void)setCoveredDateRangeRawValue:(id)arg1;
- (void)setDataPresencePoints:(id)arg1;
- (void)writeTo:(id)arg1;

@end
