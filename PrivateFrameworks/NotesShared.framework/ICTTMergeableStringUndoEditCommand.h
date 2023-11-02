
@interface ICTTMergeableStringUndoEditCommand : NSObject <ICTTMergeableStringUndoCommand> {
    void * _deleteRanges;
    void * _insertStrings;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) void*deleteRanges;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*insertStrings;
@property (readonly) Class superclass;

- (bool)addToGroup:(id)arg1;
- (void)applyToString:(id)arg1;
- (void)dealloc;
- (void*)deleteRanges;
- (id)description;
- (bool)hasTopoIDsThatCanChange;
- (id)init;
- (void*)insertStrings;
- (void)updateInsertTopoIDRange:(struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg1 toNewRangeID:(struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg2;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg1 toNewRangeID:(struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg2;

@end
