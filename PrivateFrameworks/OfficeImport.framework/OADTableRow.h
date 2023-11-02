
@interface OADTableRow : NSObject {
    NSMutableArray * mCells;
    float  mHeight;
}

- (void).cxx_destruct;
- (id)addCell;
- (id)cellAtIndex:(unsigned long long)arg1;
- (unsigned long long)cellCount;
- (id)description;
- (void)flipCellsRTL;
- (float)height;
- (id)init;
- (void)setHeight:(float)arg1;

@end
