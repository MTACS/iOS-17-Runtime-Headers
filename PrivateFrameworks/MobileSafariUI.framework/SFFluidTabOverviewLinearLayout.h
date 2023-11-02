
@interface SFFluidTabOverviewLinearLayout : SFFluidTabOverviewGridLayout {
    NSMutableDictionary * _cachedAttributes;
    NSIndexPath * _dataSourceZoomedItemIndexPath;
}

@property (nonatomic, retain) NSIndexPath *zoomedItemIndexPath;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)setZoomedItemIndexPath:(id)arg1;
- (bool)shouldAllowScrollGesture;
- (id)zoomedItemIndexPath;

@end
