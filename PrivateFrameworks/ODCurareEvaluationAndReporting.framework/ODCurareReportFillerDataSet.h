
@interface ODCurareReportFillerDataSet : PBCodable <NSCopying> {
    NSString * _sampleEndDate;
    NSString * _sampleStartDate;
    ODCurareReportFillerDataSetSize * _size;
    NSMutableArray * _stats;
}

@property (nonatomic, readonly) bool hasSampleEndDate;
@property (nonatomic, readonly) bool hasSampleStartDate;
@property (nonatomic, retain) NSString *sampleEndDate;
@property (nonatomic, retain) NSString *sampleStartDate;
@property (nonatomic, retain) ODCurareReportFillerDataSetSize *size;
@property (nonatomic, retain) NSMutableArray *stats;

+ (Class)statsType;

- (void).cxx_destruct;
- (void)addStats:(id)arg1;
- (void)clearStats;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSampleEndDate;
- (bool)hasSampleStartDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sampleEndDate;
- (id)sampleStartDate;
- (void)setSampleEndDate:(id)arg1;
- (void)setSampleStartDate:(id)arg1;
- (void)setSize:(id)arg1;
- (void)setStats:(id)arg1;
- (id)size;
- (id)stats;
- (id)statsAtIndex:(unsigned long long)arg1;
- (unsigned long long)statsCount;
- (void)writeTo:(id)arg1;

@end
