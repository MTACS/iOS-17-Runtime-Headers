
@interface AVCustomStackLayout : NSObject {
    NSString * _debugIdentifier;
    NSArray * _rowHeads;
    NSMutableArray * _rowSpacing;
}

@property (nonatomic, copy) NSString *debugIdentifier;
@property (nonatomic, retain) NSArray *rowHeads;
@property (nonatomic, retain) NSMutableArray *rowSpacing;

- (void).cxx_destruct;
- (id)_flexibleWidthMapForLayoutItemsBeginningWithLayoutItem:(id)arg1 endingWithItem:(id)arg2 withAvailableSize:(struct CGSize { double x1; double x2; })arg3;
- (double)_heightForRow:(unsigned long long)arg1 startingFrom:(id)arg2 inBoundingSize:(struct CGSize { double x1; double x2; })arg3;
- (id)_lastVisibleLayoutItemAttributesFrom:(id)arg1;
- (id)debugIdentifier;
- (id)init;
- (id)initWithLayoutRowHeads:(id)arg1;
- (id)itemsThatFitSize:(struct CGSize { double x1; double x2; })arg1;
- (id)layoutFramesInBoundingSize:(struct CGSize { double x1; double x2; })arg1;
- (double)layoutHeightThatFitsRowsStartingWithRow:(unsigned long long)arg1;
- (id)prioritizedSizeThatFitsSize:(struct CGSize { double x1; double x2; })arg1;
- (id)rowHeads;
- (id)rowSpacing;
- (void)setDebugIdentifier:(id)arg1;
- (void)setRowHeads:(id)arg1;
- (void)setRowSpacing:(id)arg1;
- (void)setRowSpacing:(double)arg1 afterRow:(unsigned long long)arg2;

@end
