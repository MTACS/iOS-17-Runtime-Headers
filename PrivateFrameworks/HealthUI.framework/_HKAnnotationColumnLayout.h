
@interface _HKAnnotationColumnLayout : UIView {
    NSMutableArray * _columnViews;
    long long  _context;
    bool  _includeSeparators;
    bool  _reverseColumnsInRightToLeftLayoutDirection;
    NSMutableArray * _separatorViews;
}

@property (nonatomic, retain) NSMutableArray *columnViews;
@property (nonatomic) long long context;
@property (nonatomic) bool includeSeparators;
@property (nonatomic) bool reverseColumnsInRightToLeftLayoutDirection;
@property (nonatomic, retain) NSMutableArray *separatorViews;

- (void).cxx_destruct;
- (void)_addSeparatorViews;
- (void)_clearColumnViews;
- (void)_clearSeparatorViews;
- (double)_columnSeparation;
- (void)_invalidateLayout;
- (double)_largestColumnWidth;
- (void)_layoutColumnsEqually;
- (void)_layoutColumnsPacked;
- (void)_layoutColumnsWithWidth:(double)arg1 columnSeparation:(double)arg2 currentSize:(struct CGSize { double x1; double x2; })arg3;
- (id)_makeSeparatorView;
- (double)_minimumHeight;
- (double)_minimumWidth;
- (double)_minimumWidthForPackedLayout;
- (double)_minimumWithForEqualLayout;
- (double)_totalColumnWidth;
- (void)addColumnView:(id)arg1;
- (void)clearViews;
- (void)clearViewsFromIndex:(unsigned long long)arg1;
- (id)columnViews;
- (long long)context;
- (bool)includeSeparators;
- (id)initWithContext:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)reverseColumnsInRightToLeftLayoutDirection;
- (id)separatorViews;
- (void)setColumnView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setColumnViews:(id)arg1;
- (void)setContext:(long long)arg1;
- (void)setIncludeSeparators:(bool)arg1;
- (void)setReverseColumnsInRightToLeftLayoutDirection:(bool)arg1;
- (void)setSeparatorViews:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
