
@interface STCandyBarView : UIView {
    NSArray * _usageItems;
    bool  _useVibrancy;
    NSArray * _viewItems;
}

@property (nonatomic, copy) NSArray *usageItems;
@property (readonly) bool useVibrancy;
@property (nonatomic, copy) NSArray *viewItems;

- (void).cxx_destruct;
- (id)capImageWithHeight:(double)arg1 leadingLineCap:(int)arg2 trailingLineCap:(int)arg3;
- (id)initWithVibrancy:(bool)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setUsageItems:(id)arg1;
- (void)setUsageItems:(id)arg1 animated:(bool)arg2;
- (void)setViewItems:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updateSectionViewImages;
- (id)usageItems;
- (bool)useVibrancy;
- (id)viewItems;

@end
