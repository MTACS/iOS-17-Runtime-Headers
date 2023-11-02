
@interface CPLByClassExtractionStep : CPLBatchExtractionStep {
    Class  _extractionClass;
    unsigned long long  _maximumCount;
    int (* _query;
    NSString * _queryDescription;
}

@property (nonatomic, readonly) Class extractionClass;
@property (nonatomic, readonly) unsigned long long maximumCount;
@property (nonatomic, readonly, copy) NSString *queryDescription;

- (void).cxx_destruct;
- (bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4;
- (Class)extractionClass;
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 description:(id)arg3 class:(Class)arg4 maximumCount:(unsigned long long)arg5 query:(int (*)arg6;
- (unsigned long long)maximumCount;
- (id)queryDescription;
- (void)reset;
- (id)shortDescription;
- (bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;

@end
