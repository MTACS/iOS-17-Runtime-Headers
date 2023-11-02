
@interface CPLDropAllRecordsExtractionStep : CPLBatchExtractionStep

- (bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4;
- (void)reset;
- (id)shortDescription;
- (bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;

@end
