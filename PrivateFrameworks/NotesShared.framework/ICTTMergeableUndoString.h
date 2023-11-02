
@interface ICTTMergeableUndoString : ICTTMergeableString

- (void)addUndoCommand:(id)arg1;
- (void)applyUndoCommand:(id)arg1;
- (void)deleteSubstrings:(void*)arg1 withCharacterRanges:(void*)arg2;
- (struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })insertAttributedString:(id)arg1 after:(void*)arg2 before:(void*)arg3;
- (void)undeleteSubstrings:(void*)arg1;

@end
