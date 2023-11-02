
@interface REDateRelevanceProvider : RERelevanceProvider {
    NSDate * _initialRelevanceDate;
    NSDateInterval * _interval;
    NSDate * _irrelevantDate;
    double  _recentDuration;
}

@property (nonatomic, readonly) NSDate *initialRelevanceDate;
@property (nonatomic, readonly) NSDateInterval *interval;
@property (nonatomic, readonly) NSDate *irrelevantDate;
@property (nonatomic, readonly) double recentDuration;

+ (id)_simulationDateFormatter;
+ (id)relevanceSimulatorID;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithEventDate:(id)arg1;
- (id)initWithEventDate:(id)arg1 duration:(double)arg2;
- (id)initWithEventInterval:(id)arg1;
- (id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2;
- (id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2 firstBecomesRelevantDate:(id)arg3 recentDuration:(double)arg4;
- (id)initialRelevanceDate;
- (id)interval;
- (id)irrelevantDate;
- (bool)isEqual:(id)arg1;
- (double)recentDuration;

@end
