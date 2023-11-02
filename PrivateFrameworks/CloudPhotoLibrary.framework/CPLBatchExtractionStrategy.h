
@interface CPLBatchExtractionStrategy : NSObject {
    CPLBatchExtractionStep * _currentStep;
    bool  _finished;
    bool  _loggedForThisStep;
    unsigned long long  _maximumRecordCountPerBatch;
    NSString * _name;
    NSString * _scopeIdentifier;
    NSEnumerator * _stepEnumerator;
    NSArray * _steps;
    <CPLBatchExtractionStrategyStorage> * _storage;
    NSString * _strategyName;
}

@property (nonatomic, readonly, copy) NSString *currentStepDescription;
@property (nonatomic) unsigned long long maximumRecordCountPerBatch;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSString *scopeIdentifier;
@property (nonatomic, readonly, copy) NSString *stepsDescription;
@property (nonatomic, readonly) <CPLBatchExtractionStrategyStorage> *storage;
@property (nonatomic, readonly, copy) NSString *strategyName;

+ (unsigned long long)maximumAlbumsPerBatch;
+ (unsigned long long)maximumRecordCountPerBatch;
+ (id)minglingStrategyWithStorage:(id)arg1 coveringScopeIdentifier:(id)arg2 maximumBatchSize:(unsigned long long)arg3;
+ (unsigned long long)minimumRecordCountPerBatch;
+ (id)overQuotaStrategyWithStorage:(id)arg1 coveringScopeIdentifier:(id)arg2;
+ (void)setMaximumAlbumsPerBatch:(unsigned long long)arg1;
+ (void)setMaximumRecordCountPerBatch:(unsigned long long)arg1;
+ (id)usualStrategyWithStorage:(id)arg1 coveringScopeIdentifier:(id)arg2;

- (void).cxx_destruct;
- (void)_computeNextStep;
- (bool)_hasChanges;
- (id)cplFullDescription;
- (id)currentStepDescription;
- (id)description;
- (bool)extractBatch:(out id*)arg1 maximumResourceSize:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithName:(id)arg1 storage:(id)arg2 scopeIdentifier:(id)arg3 steps:(id)arg4;
- (unsigned long long)maximumRecordCountPerBatch;
- (id)name;
- (void)reset;
- (void)resetConditionallyFromNewIncomingChange:(id)arg1;
- (id)scopeIdentifier;
- (void)setMaximumRecordCountPerBatch:(unsigned long long)arg1;
- (id)stepsDescription;
- (id)storage;
- (id)strategyName;

@end
