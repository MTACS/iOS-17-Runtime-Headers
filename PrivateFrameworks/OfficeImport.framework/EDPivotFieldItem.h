
@interface EDPivotFieldItem : NSObject {
    bool  mCalculatedMember;
    bool  mChildItems;
    bool  mDetailsHidden;
    bool  mExpanded;
    bool  mHidden;
    unsigned long long  mItemIndex;
    bool  mMissed;
    int  mType;
}

+ (id)pivotFieldItem;

- (bool)calculatedMember;
- (bool)childItems;
- (id)description;
- (bool)detailsHidden;
- (bool)expanded;
- (bool)hidden;
- (id)init;
- (unsigned long long)itemIndex;
- (bool)missed;
- (void)setCalculatedMember:(bool)arg1;
- (void)setChildItems:(bool)arg1;
- (void)setDetailsHidden:(bool)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setItemIndex:(unsigned long long)arg1;
- (void)setMissed:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
