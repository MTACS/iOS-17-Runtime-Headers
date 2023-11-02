
@protocol TSCETableResolverFactoryProtocol <NSObject>

@required

- (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct TSKUIDStruct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })aggregateRangeRefForCategoryRef:(TSCECategoryRef *)arg1;
- (unsigned char)aggregateTypeForCategoryRef:(TSCECategoryRef *)arg1;
- (struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> { id *x1; id *x2; struct __compressed_pair<TSCECategoryRef *__strong *, std::allocator<TSCECategoryRef *>> { id *x_3_1_1; } x3; })categoryRefsForSpanningCategoryRef:(TSCECategoryRef *)arg1;
- (struct vector<TSCECellRef, std::allocator<TSCECellRef>> { struct TSCECellRef {} *x1; struct TSCECellRef {} *x2; struct __compressed_pair<TSCECellRef *, std::allocator<TSCECellRef>> { struct TSCECellRef {} *x_3_1_1; } x3; })cellRefsForCategoryRef:(TSCECategoryRef *)arg1 atRowUid:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)initWithCalcEngine:(void*)arg1;
- (struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })mapOwnerUID:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg1;
- (struct TSCETableResolver { int (**x1)(); }*)newTableResolverForResolver:(id <TSCEReferenceResolving>)arg1;
- (struct vector<TSCECellRef, std::allocator<TSCECellRef>> { struct TSCECellRef {} *x1; struct TSCECellRef {} *x2; struct __compressed_pair<TSCECellRef *, std::allocator<TSCECellRef>> { struct TSCECellRef {} *x_3_1_1; } x3; })unorderedCellRefsForCategoryRef:(TSCECategoryRef *)arg1 atRowUid:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg2;
- (TSCEValueGrid *)valueGridForCategoryRef:(TSCECategoryRef *)arg1 atRowUid:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg2 hidingActionMask:(unsigned char)arg3 error:(id*)arg4;
- (struct vector<TSCEValue, std::allocator<TSCEValue>> { struct TSCEValue {} *x1; struct TSCEValue {} *x2; struct __compressed_pair<TSCEValue *, std::allocator<TSCEValue>> { struct TSCEValue {} *x_3_1_1; } x3; })valuesForCategoryRef:(TSCECategoryRef *)arg1 atRowUid:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg2 hidingActionMask:(unsigned char)arg3 error:(id*)arg4;

@end
