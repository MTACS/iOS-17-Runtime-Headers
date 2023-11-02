
@protocol TSCEColumnRowUIDMapping

@required

- (TSCEMutableUIDSet *)UIDSetForIndexes:(NSIndexSet *)arg1 isRows:(bool)arg2;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })cellRangeForUIDRange:(const void*)arg1;
- (struct TSKUIDStructTract { struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct {} *x_1_1_1; struct TSKUIDStruct {} *x_1_1_2; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct {} *x_3_2_1; } x_1_1_3; } x1; struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct {} *x_2_1_1; struct TSKUIDStruct {} *x_2_1_2; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct {} *x_3_2_1; } x_2_1_3; } x2; })cellUIDRangeForCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (unsigned short)columnIndexForColumnUID:(struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned short)columnIndexForUUIDBytes:(unsigned char)arg1;
- (NSIndexSet *)columnIndexesForUIDs:(const void*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })columnRangeForUIDs:(const void*)arg1;
- (struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })columnUIDForColumnIndex:(unsigned short)arg1;
- (const void*)columnUIDs;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct {} *x1; struct TSKUIDStruct {} *x2; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct {} *x_3_1_1; } x3; })columnUIDsForColumnIndexes:(NSIndexSet *)arg1;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct {} *x1; struct TSKUIDStruct {} *x2; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct {} *x_3_1_1; } x3; })columnUIDsForColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (NSArray *)columnUuids;
- (struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })firstUidFromUIDSet:(TSCEUIDSet *)arg1 isRows:(bool)arg2;
- (void)getUUIDBytes:(unsigned char)arg1 forColumnIndex:(unsigned short)arg2;
- (void)getUUIDBytes:(unsigned char)arg1 forRowIndex:(unsigned int)arg2;
- (NSMutableIndexSet *)mutableColumnIndexesForUIDs:(const void*)arg1;
- (NSMutableIndexSet *)mutableIndexesForUIDSet:(TSCEUIDSet *)arg1 isRows:(bool)arg2;
- (NSMutableIndexSet *)mutableIndexesForUIDSet:(TSCEUIDSet *)arg1 isRows:(bool)arg2 notFoundUIDs:(TSCEMutableUIDSet *)arg3;
- (NSMutableIndexSet *)mutableRowIndexesForUIDs:(const void*)arg1;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct {} *x1; struct TSKUIDStruct {} *x2; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct {} *x_3_1_1; } x3; })orderedColumnUidsFromUids:(const void*)arg1;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct {} *x1; struct TSKUIDStruct {} *x2; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct {} *x_3_1_1; } x3; })orderedRowUidsFromUids:(const void*)arg1;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct {} *x1; struct TSKUIDStruct {} *x2; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct {} *x_3_1_1; } x3; })prunedColumnUIDsFromColumnUIDs:(const void*)arg1;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct {} *x1; struct TSKUIDStruct {} *x2; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct {} *x_3_1_1; } x3; })prunedRowUIDsFromRowUIDs:(const void*)arg1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })range;
- (unsigned int)rowIndexForRowUID:(struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned int)rowIndexForUUIDBytes:(unsigned char)arg1;
- (NSIndexSet *)rowIndexesForUIDs:(const void*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rowRangeForUIDs:(const void*)arg1;
- (struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })rowUIDForRowIndex:(unsigned int)arg1;
- (const void*)rowUIDs;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct {} *x1; struct TSKUIDStruct {} *x2; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct {} *x_3_1_1; } x3; })rowUIDsForRowIndexes:(NSIndexSet *)arg1;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct {} *x1; struct TSKUIDStruct {} *x2; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct {} *x_3_1_1; } x3; })rowUIDsForRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (NSArray *)rowUuids;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct TSUCellCoord { unsigned int x_2_1_1; unsigned short x_2_1_2; bool x_2_1_3; bool x_2_1_4; } x2; })tableRangeCoordinate;

@end
