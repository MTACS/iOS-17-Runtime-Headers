
@interface TSTTableDataStore : TSPContainedObject {
    unsigned int  mCellCount;
    bool  mCellCountValid;
    TSPLazyReference * mColumnHeaderStorageReference;
    struct TSTTableRBTreeNode_s { unsigned short x1; unsigned short x2; struct TSTTableRBTreeNode_s {} *x3; struct TSTTableRBTreeNode_s {} *x4; struct TSTTableRBTreeNode_s {} *x5; BOOL x6; } * mColumnTileIndex;
    TSPLazyReference * mCommentStorageTableReference;
    TSPLazyReference * mConditionalStyleSetTableReference;
    bool  mDrawableIsBeingCopied;
    TSPLazyReference * mFormatTableReference;
    TSPLazyReference * mFormulaErrorTableReference;
    TSPLazyReference * mFormulaTableReference;
    TSTMergeRegionMap * mMergedCellRanges;
    TSPLazyReference * mMultipleChoiceListFormatTableReference;
    unsigned short  mNextColumnStripID;
    unsigned short  mNextRowStripID;
    TSTCustomFormatList * mPasteboardCustomFormatList;
    TSPLazyReference * mRichTextPayloadTableReference;
    TSTTableHeaderStorage * mRowHeaderStorage;
    struct TSTTableRBTreeNode_s { unsigned short x1; unsigned short x2; struct TSTTableRBTreeNode_s {} *x3; struct TSTTableRBTreeNode_s {} *x4; struct TSTTableRBTreeNode_s {} *x5; BOOL x6; } * mRowTileIndex;
    unsigned int  mStorageVersion;
    TSPLazyReference * mStringTableReference;
    TSPLazyReference * mStyleTableReference;
    TSTTileIDKeyDict * mTileStorage;
}

- (void)dealloc;
- (void)debugDump;
- (id)initWithOwner:(id)arg1;
- (bool)needToUpgradeCellStorage;
- (void)p_updateTileStorageToCurrentVersion;
- (void)setDrawableIsBeingCopied:(bool)arg1;
- (void)setStorageParentToInfo:(id)arg1;
- (void)upgradeDataStoreCellStorage;
- (void)validate;

@end
