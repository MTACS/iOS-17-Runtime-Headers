
@interface ICTable : CRTable {
    ICTableCellChangeNotifier * _cellChangeNotifier;
    NSMutableDictionary * _columnTextStorages;
}

@property (nonatomic, readonly) ICTableCellChangeNotifier *cellChangeNotifier;
@property (nonatomic, readonly) NSMutableDictionary *columnTextStorages;
@property (nonatomic) NSObject<ICTableDelegate> *delegate;
@property (nonatomic, readonly) ICCRTTCompatibleDocument *ttDocument;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (void)registerWithICCRCoder;

- (void).cxx_destruct;
- (id)cellChangeNotifier;
- (bool)columnIsEmptyAtIndex:(unsigned long long)arg1;
- (id)columnTextStorages;
- (id)copyIntoNewDocumentWithReplicaID:(id)arg1;
- (id)defaultContentAtColumn:(id)arg1 row:(id)arg2;
- (bool)isEmptyAtColumnIdentifiers:(id)arg1 rowIdentifiers:(id)arg2;
- (bool)isEmptyAtColumnIndexes:(id)arg1 rowIndexes:(id)arg2;
- (id)mergeableStringForColumnID:(id)arg1 rowID:(id)arg2;
- (bool)rowIsEmptyAtIndex:(unsigned long long)arg1;
- (void)setAttributedString:(id)arg1 columnIndex:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3;
- (id)stringForColumnID:(id)arg1 rowID:(id)arg2;
- (id)stringForColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (id)subtableWithDocument:(id)arg1 forSelectionContainingColumnIndices:(id)arg2 rowIndices:(id)arg3;
- (id)ttDocument;
- (void)undoablyInsertContents:(id)arg1 atColumn:(id)arg2;
- (void)undoablyRemoveContentsOfColumn:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)attributedStringWithNSTextTablesForColumns:(id)arg1 rows:(id)arg2 context:(id)arg3;
- (id)attributedStringWithNSTextTablesForColumns:(id)arg1 rows:(id)arg2 context:(id)arg3 forPrinting:(bool)arg4;
- (id)documentForCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (void)enumerateTextStoragesForColumnIndexes:(id)arg1 rowIndexes:(id)arg2 undoTarget:(id)arg3 undoManager:(id)arg4 usingBlock:(id /* block */)arg5;
- (id)joinedAttributedStringForColumns:(id)arg1 rows:(id)arg2;
- (id)joinedAttributedStringForColumns:(id)arg1 rows:(id)arg2 deepCopyInlineAttachments:(bool)arg3 note:(id)arg4 parentAttachment:(id)arg5;
- (id)mergeableStringForColumnID:(id)arg1 rowID:(id)arg2 createIfNeeded:(bool)arg3;
- (id)p_attributedStringForCell:(id)arg1 inTable:(id)arg2 atColumn:(unsigned long long)arg3 row:(unsigned long long)arg4 shouldFilter:(bool)arg5 context:(id)arg6;
- (id)textStorageForCellAtColumnID:(id)arg1 rowID:(id)arg2;
- (id)textStorageForCellAtColumnID:(id)arg1 rowID:(id)arg2 undoTarget:(id)arg3 undoManager:(id)arg4;
- (id)textStorageForCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (id)textStorageForCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2 undoTarget:(id)arg3 undoManager:(id)arg4;
- (id)textStorageForColumn:(id)arg1;

@end
