
@interface CPLDeleteChainedRecordExtractionStep : CPLBatchExtractionStep {
    NSString * _classDescription;
    unsigned long long  _maximumCount;
    Class  _recordClass;
}

@property (nonatomic, readonly) NSString *classDescription;
@property (nonatomic, readonly) unsigned long long maximumCount;
@property (nonatomic, readonly) Class recordClass;

- (void).cxx_destruct;
- (id)classDescription;
- (bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4;
- (id)initWithStorage:(id)arg1 class:(Class)arg2 classDescription:(id)arg3 scopeIdentifier:(id)arg4 maximumCount:(unsigned long long)arg5;
- (unsigned long long)maximumCount;
- (Class)recordClass;
- (id)shortDescription;
- (bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;

@end
