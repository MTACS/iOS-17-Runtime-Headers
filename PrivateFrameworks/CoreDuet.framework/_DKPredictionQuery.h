
@interface _DKPredictionQuery : _DKEventQuery {
    NSDate * _asOfDate;
    bool  _isTopNPrediction;
    double  _minLikelihood;
    int  _minimumDaysOfHistory;
    unsigned long long  _partitionType;
    id /* block */  _predictionHandler;
    int  _slotDuration;
    _DKKnowledgeStorage * _storage;
    long long  _topN;
    int  _totalSlotsInDay;
    unsigned long long  _type;
    bool  _useHistoricalHistogram;
}

@property (nonatomic, retain) NSDate *asOfDate;
@property (nonatomic) int minimumDaysOfHistory;
@property (nonatomic) unsigned long long partitionType;
@property (copy) id /* block */ predictionHandler;
@property (nonatomic) int slotDuration;
@property (nonatomic, retain) _DKKnowledgeStorage *storage;
@property (nonatomic) unsigned long long type;
@property (nonatomic) bool useHistoricalHistogram;

+ (id)predictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
+ (id)predictionQueryForStreams:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;
+ (id)topNPredictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withTopN:(long long)arg3 withMinLikelihood:(double)arg4;

- (void).cxx_destruct;
- (id)asOfDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (int)minimumDaysOfHistory;
- (unsigned long long)partitionType;
- (id /* block */)predictionHandler;
- (void)setAsOfDate:(id)arg1;
- (void)setMinimumDaysOfHistory:(int)arg1;
- (void)setPartitionType:(unsigned long long)arg1;
- (void)setPredictionHandler:(id /* block */)arg1;
- (void)setSlotDuration:(int)arg1;
- (void)setStorage:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUseHistoricalHistogram:(bool)arg1;
- (int)slotDuration;
- (id)storage;
- (unsigned long long)type;
- (bool)useHistoricalHistogram;

@end
