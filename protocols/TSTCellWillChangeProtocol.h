
@protocol TSTCellWillChangeProtocol

@required

- (void)willApplyBaseCellMap:(TSTCellMap *)arg1 tableUID:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)willApplyCell:(TSTCell *)arg1 baseCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg2 tableUID:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg3;
- (void)willApplyConcurrentCellMap:(TSTConcurrentCellMap *)arg1 tableUID:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)willRemoveRows:(const void*)arg1 tableUID:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg2;

@end
