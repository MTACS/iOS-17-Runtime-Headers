
@protocol TSTGroupByChangeProtocol

@required

- (void)didAddRowUID:(struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })arg1 toGroup:(TSTGroupNode *)arg2;
- (void)didChangeGroupByStructure;
- (void)didCreateGroup:(TSTGroupNode *)arg1;
- (void)didRemoveGroup:(TSTGroupNode *)arg1;
- (void)didRemoveRowUID:(struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })arg1 fromGroup:(TSTGroupNode *)arg2;
- (void)endOfGroupingChangesBatch;
- (void)startOfGroupingChangesBatch;
- (void)willRemoveGroup:(TSTGroupNode *)arg1;

@end
