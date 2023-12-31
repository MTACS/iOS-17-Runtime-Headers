
@interface MFComposeImageSizeView : MFMailComposeHeaderView {
    UISegmentedControl * _segmentedControl;
    NSMutableArray * _visibleScales;
}

@property (nonatomic) <MFComposeImageSizeViewDelegate> *delegate;

- (void).cxx_destruct;
- (unsigned long long)_insertIndexForScale:(unsigned long long)arg1;
- (unsigned long long)_scaleLabelIndexForScale:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)removeSizeDescriptionForScale:(unsigned long long)arg1;
- (void)segmentedControlChanged;
- (void)setScale:(unsigned long long)arg1;
- (void)setSizeDescription:(id)arg1 forScale:(unsigned long long)arg2;

@end
