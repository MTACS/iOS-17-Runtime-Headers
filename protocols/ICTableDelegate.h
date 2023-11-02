
@protocol ICTableDelegate <ICCRUndoDelegate>

@optional

- (void)tableDidCreateColumnTextStorage:(ICTTTextStorage *)arg1;
- (void)tableDidInsertColumnID:(NSUUID *)arg1;
- (void)tableDidPopulateCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (void)tableWillRemoveColumnID:(NSUUID *)arg1;

@end
