
@interface CPLTrashedAssetExtractionStep : CPLBatchExtractionStep {
    unsigned long long  _maximumCount;
}

@property (nonatomic, readonly) unsigned long long maximumCount;

- (bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4;
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3;
- (unsigned long long)maximumCount;
- (id)shortDescription;
- (bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;

@end
