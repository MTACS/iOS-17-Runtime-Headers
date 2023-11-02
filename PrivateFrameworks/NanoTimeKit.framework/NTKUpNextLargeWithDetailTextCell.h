
@interface NTKUpNextLargeWithDetailTextCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider> {
    NTKUpNextImageView * _bodyImage;
    CLKUIColoringLabel * _bodyLabel;
    UILayoutGuide * _contentLayoutGuide;
    CLKUIColoringLabel * _detail1Label;
    CLKUIColoringLabel * _detail2Label;
    CLKUIColoringLabel * _headerLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)colorForView:(id)arg1 accented:(bool)arg2;
- (void)configureWithContent:(id)arg1;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)filtersForView:(id)arg1 style:(long long)arg2;
- (id)filtersForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
