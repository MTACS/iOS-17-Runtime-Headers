
@protocol AEPolicyStore

@required

- (bool)hasPersistentData;
- (<AEPolicyReadOnlyScratchpad><AERemovable> *)readOnlyScratchpadForIdentifier:(NSString *)arg1;
- (bool)removeAllScratchpadsWithError:(id*)arg1;
- (<AEPolicyWriteOnlyScratchpad><AEPersistable> *)writeOnlyScratchpadForIdentifier:(NSString *)arg1;

@end
