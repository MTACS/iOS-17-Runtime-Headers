
@interface _PXArrayNoIncrementalChangeDetails : PXArrayChangeDetails

- (bool)hasIncrementalChanges;
- (unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)arg1;
- (unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)arg1;

@end
