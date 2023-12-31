
@interface EDPivotField : NSObject {
    int  mAxis;
    bool  mCompact;
    bool  mDataField;
    bool  mInsertBlankRow;
    unsigned long long  mNumFmtId;
    bool  mOutlineItems;
    EDCollection * mPivotFieldItems;
    bool  mShowAllItems;
    bool  mShowDefaultSubTotal;
    bool  mSubtotalTop;
}

+ (id)pivotField;

- (void).cxx_destruct;
- (int)axis;
- (bool)compact;
- (bool)dataField;
- (id)description;
- (id)init;
- (bool)insertBlankRow;
- (unsigned long long)numFmtId;
- (bool)outlineItems;
- (id)pivotFieldItems;
- (void)setAxis:(int)arg1;
- (void)setCompact:(bool)arg1;
- (void)setDataField:(bool)arg1;
- (void)setInsertBlankRow:(bool)arg1;
- (void)setNumFmtId:(unsigned long long)arg1;
- (void)setOutlineItems:(bool)arg1;
- (void)setShowAllItems:(bool)arg1;
- (void)setShowDefaultSubTotal:(bool)arg1;
- (void)setSubtotalTop:(bool)arg1;
- (bool)showAllItems;
- (bool)showDefaultSubTotal;
- (bool)subtotalTop;

@end
