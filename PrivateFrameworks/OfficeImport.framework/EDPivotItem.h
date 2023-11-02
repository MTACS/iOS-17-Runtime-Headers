
@interface EDPivotItem : NSObject {
    EDCollection * mItemIndexes;
    unsigned int  mRepeatedItemCounts;
    int  mType;
}

+ (id)pivotItem;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)itemIndexes;
- (unsigned int)repeatedItemCounts;
- (void)setRepeatedItemCounts:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
