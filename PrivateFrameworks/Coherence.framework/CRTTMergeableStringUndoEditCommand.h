
@interface CRTTMergeableStringUndoEditCommand : NSObject {
    CRContext * _context;
    void * _deleteRanges;
    void * _insertStrings;
}

@property (nonatomic) CRContext *context;
@property (nonatomic, readonly) void*deleteRanges;
@property (nonatomic, readonly) void*insertStrings;

- (void).cxx_destruct;
- (bool)_applyToString:(id)arg1;
- (bool)applyToString:(id)arg1;
- (id)context;
- (void)dealloc;
- (void*)deleteRanges;
- (id)description;
- (bool)hasTemporaryIDs;
- (id)init;
- (void*)insertStrings;
- (id)renamedWith:(id)arg1;
- (void)retainTemporaryIDs;
- (void)setContext:(id)arg1;
- (id)temporaryIDs;
- (void)updateInsertTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x_1_2_1[16]; unsigned int x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg1 toNewRangeID:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x_1_2_1[16]; unsigned int x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg2;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x_1_2_1[16]; unsigned int x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg1 toNewRangeID:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x_1_2_1[16]; unsigned int x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg2;

@end
