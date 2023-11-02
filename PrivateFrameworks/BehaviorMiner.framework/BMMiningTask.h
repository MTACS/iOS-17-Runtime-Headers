
@interface BMMiningTask : NSObject {
    unsigned long long  _absoluteSupport;
    BMBasketExtractor * _basketExtractor;
    BMMiningTaskConfig * _bmMiningTaskConfig;
    long long  _completionStatus;
    double  _confidence;
    NSMutableDictionary * _coreAnalyticsDict;
    <BMMiningTaskDelegate> * _delegate;
    NSString * _domain;
    BMEventExtractor * _eventExtractor;
    unsigned long long  _maxItemsetSize;
    double  _miningInterval;
    BMAprioriPatternMiner<BMPatternMiner> * _patternMiner;
    BMRuleExtractor * _ruleExtractor;
    unsigned long long  _rulePersistBatchSize;
    double  _samplingInterval;
    NSDate * _start;
    NSURL * _storageURL;
    NSSet * _targetTypes;
    NSSet * _types;
}

@property (nonatomic, readonly) unsigned long long absoluteSupport;
@property (nonatomic, retain) BMBasketExtractor *basketExtractor;
@property (nonatomic, retain) BMMiningTaskConfig *bmMiningTaskConfig;
@property (nonatomic) long long completionStatus;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, retain) NSMutableDictionary *coreAnalyticsDict;
@property (nonatomic) <BMMiningTaskDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, retain) BMEventExtractor *eventExtractor;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic) unsigned long long maxItemsetSize;
@property (nonatomic, readonly) double miningInterval;
@property (nonatomic, retain) BMAprioriPatternMiner<BMPatternMiner> *patternMiner;
@property (nonatomic, retain) BMRuleExtractor *ruleExtractor;
@property (nonatomic, readonly) unsigned long long rulePersistBatchSize;
@property (nonatomic, readonly) double samplingInterval;
@property (nonatomic, copy) NSDate *start;
@property (nonatomic, readonly, copy) NSURL *storageURL;
@property (nonatomic, readonly, copy) NSSet *targetTypes;
@property (nonatomic, readonly, copy) NSSet *types;

+ (id)supergreenMiningTask;
+ (bool)supportsTaskSpecificEvents;

- (void).cxx_destruct;
- (unsigned long long)absoluteSupport;
- (id)basketExtractor;
- (id)bmMiningTaskConfig;
- (long long)completionStatus;
- (double)confidence;
- (id)coreAnalyticsDict;
- (id)delegate;
- (id)domain;
- (id)eventExtractor;
- (void)finishWithCompletionStatus:(long long)arg1;
- (void)finishWithError:(id)arg1;
- (id)init;
- (id)initWithDomain:(id)arg1 types:(id)arg2 targetTypes:(id)arg3 samplingInterval:(double)arg4 absoluteSupport:(unsigned long long)arg5 confidence:(double)arg6 rulePersistBatchSize:(unsigned long long)arg7 miningInterval:(double)arg8;
- (id)initWithStorageURL:(id)arg1 types:(id)arg2 targetTypes:(id)arg3 samplingInterval:(double)arg4 absoluteSupport:(unsigned long long)arg5 confidence:(double)arg6;
- (id)initWithStorageURL:(id)arg1 types:(id)arg2 targetTypes:(id)arg3 samplingInterval:(double)arg4 absoluteSupport:(unsigned long long)arg5 confidence:(double)arg6 rulePersistBatchSize:(unsigned long long)arg7;
- (id)initWithStorageURL:(id)arg1 types:(id)arg2 targetTypes:(id)arg3 samplingInterval:(double)arg4 absoluteSupport:(unsigned long long)arg5 confidence:(double)arg6 rulePersistBatchSize:(unsigned long long)arg7 miningInterval:(double)arg8;
- (bool)isFinished;
- (unsigned long long)maxItemsetSize;
- (void)mine;
- (double)miningInterval;
- (id)patternMiner;
- (id)ruleExtractor;
- (unsigned long long)rulePersistBatchSize;
- (double)samplingInterval;
- (void)setBasketExtractor:(id)arg1;
- (void)setBmMiningTaskConfig:(id)arg1;
- (void)setCompletionStatus:(long long)arg1;
- (void)setCoreAnalyticsDict:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEventExtractor:(id)arg1;
- (void)setMaxItemsetSize:(unsigned long long)arg1;
- (void)setPatternMiner:(id)arg1;
- (void)setRuleExtractor:(id)arg1;
- (void)setStart:(id)arg1;
- (id)start;
- (id)storageURL;
- (id)targetTypes;
- (void)terminateEarly;
- (id)types;

@end
