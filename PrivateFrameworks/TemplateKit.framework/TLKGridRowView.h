
@interface TLKGridRowView : TLKView {
    NSMutableArray * _currentListOfViews;
    NSMutableArray * _imageViews;
    unsigned long long  _indexOfFirstCenteredColumnForForcedCentering;
    unsigned long long  _indexOfFirstTrailingColumn;
    NSMutableArray * _labels;
    TLKGridLayoutManager * _manager;
    bool  _needsSizingPass;
    TLKTableRow * _tableRow;
}

@property (nonatomic, retain) NSMutableArray *currentListOfViews;
@property (nonatomic, retain) NSMutableArray *imageViews;
@property (nonatomic) unsigned long long indexOfFirstCenteredColumnForForcedCentering;
@property (nonatomic) unsigned long long indexOfFirstTrailingColumn;
@property (nonatomic, retain) NSMutableArray *labels;
@property (nonatomic, retain) TLKGridLayoutManager *manager;
@property (nonatomic) bool needsSizingPass;
@property (nonatomic, retain) TLKTableRow *tableRow;

+ (void)updateLabel:(id)arg1 withRichText:(id)arg2 alignment:(long long)arg3;

- (void).cxx_destruct;
- (id)currentListOfViews;
- (void)generateLabelsAndImagesIfNecessary;
- (id)imageViews;
- (unsigned long long)indexOfFirstCenteredColumnForForcedCentering;
- (unsigned long long)indexOfFirstTrailingColumn;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;
- (id)labels;
- (void)layoutSubviews;
- (id)leadingTextView;
- (id)manager;
- (bool)needsSizingPass;
- (void)observedPropertiesChanged;
- (void)resetStateOfAllViews;
- (void)setCurrentListOfViews:(id)arg1;
- (void)setImageViews:(id)arg1;
- (void)setIndexOfFirstCenteredColumnForForcedCentering:(unsigned long long)arg1;
- (void)setIndexOfFirstTrailingColumn:(unsigned long long)arg1;
- (void)setLabels:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setNeedsSizingPass:(bool)arg1;
- (void)setTableRow:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)tableRow;

@end
