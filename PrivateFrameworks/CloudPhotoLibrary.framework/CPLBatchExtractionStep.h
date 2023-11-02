
@interface CPLBatchExtractionStep : NSObject {
    NSString * _scopeIdentifier;
    <CPLBatchExtractionStrategyStorage> * _storage;
}

@property (nonatomic, readonly, copy) NSString *scopeIdentifier;
@property (nonatomic, readonly) <CPLBatchExtractionStrategyStorage> *storage;

- (void).cxx_destruct;
- (id)description;
- (bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4;
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2;
- (void)reset;
- (void)resetConditionallyFromNewIncomingChange:(id)arg1;
- (id)scopeIdentifier;
- (id)shortDescription;
- (bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;
- (id)storage;

@end
