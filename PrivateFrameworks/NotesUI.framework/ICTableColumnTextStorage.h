
@interface ICTableColumnTextStorage : ICTableTextStorage <ICTableCellMergeableStringObserving> {
    NSUUID * _columnID;
    NSMutableDictionary * _mergeableStringDelegates;
    unsigned long long  _preventEditingUpdatesCount;
    NSMutableIndexSet * _rowStartIndexes;
    NSMutableArray * _rows;
    bool  _shouldPreventUndoCommands;
    ICTable * _table;
    <ICTableUndoHelping> * _undoHelper;
}

@property (readonly) NSUUID *columnID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *mergeableStringDelegates;
@property (nonatomic, readonly) NSArray *populatedRows;
@property (nonatomic, readonly) bool preventEditingUpdates;
@property (nonatomic) unsigned long long preventEditingUpdatesCount;
@property (nonatomic, readonly) NSMutableIndexSet *rowStartIndexes;
@property (nonatomic, readonly) NSMutableArray *rows;
@property (nonatomic) bool shouldPreventUndoCommands;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ICTable *table;
@property (nonatomic) <ICTableUndoHelping> *undoHelper;

- (void).cxx_destruct;
- (void)beginPreventEditingUpdates;
- (void)breakUndoCoalescing;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRangeForRowID:(id)arg1;
- (void)closeUndoGroups;
- (id)columnID;
- (id)editAtIndex:(unsigned long long)arg1;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (void)endPreventEditingUpdates;
- (void)enumerateEditsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)indexOfRow:(id)arg1;
- (unsigned long long)indexOfRowAtLocation:(unsigned long long)arg1;
- (id)init;
- (id)initWithTable:(id)arg1 columnID:(id)arg2 replicaID:(id)arg3;
- (unsigned long long)insertionIndexForRow:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })logicalRangeForLocation:(unsigned long long)arg1;
- (id)mergeableStringDelegates;
- (id)mergeableStringForRowID:(id)arg1;
- (unsigned long long)nextLocationAfterRowLocation:(unsigned long long)arg1;
- (id)populatedRows;
- (bool)preventEditingUpdates;
- (unsigned long long)preventEditingUpdatesCount;
- (void)removeRow:(id)arg1;
- (void)removeTextForRow:(id)arg1;
- (void)resetUndoManager;
- (void)restoreSelection:(id)arg1;
- (id)rowAtIndex:(unsigned long long)arg1 rowRange:(out struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (unsigned long long)rowLocationForRowID:(id)arg1;
- (unsigned long long)rowLocationForRowIndex:(unsigned long long)arg1;
- (id)rowStartIndexes;
- (id)rows;
- (id)savedSelectionWithSelectionAffinity:(unsigned long long)arg1;
- (void)setPreventEditingUpdatesCount:(unsigned long long)arg1;
- (void)setShouldPreventUndoCommands:(bool)arg1;
- (void)setUndoHelper:(id)arg1;
- (bool)shouldPreventUndoCommands;
- (id)table;
- (void)tableCellWasEditedAtColumnID:(id)arg1 rowID:(id)arg2 edited:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 changeInLength:(long long)arg5;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;
- (id)undoHelper;
- (void)updateStorageForMovedRow:(id)arg1;
- (bool)wantsTimestampUpdates;
- (bool)wantsUndoCommands;

@end
