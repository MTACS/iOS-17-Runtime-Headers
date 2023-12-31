
@protocol ICTableCellMergeableStringObserving <NSObject>

@required

- (bool)shouldPreventUndoCommands;
- (void)tableCellWasEditedAtColumnID:(NSUUID *)arg1 rowID:(NSUUID *)arg2 edited:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 changeInLength:(long long)arg5;
- (<ICTableUndoHelping> *)undoHelper;

@end
