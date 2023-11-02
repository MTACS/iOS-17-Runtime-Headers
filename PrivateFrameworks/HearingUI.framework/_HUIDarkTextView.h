
@interface _HUIDarkTextView : UIView <MTVisualStylingRequiring> {
    HACCCapsuleDarkBackground * _darkBackgroundView;
    NSArray * _defaultLayouts;
    NSArray * _largeTextLayouts;
    UILabel * _nameLabel;
    UILabel * _valueLabel;
}

@property (nonatomic, retain) HACCCapsuleDarkBackground *darkBackgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *defaultLayouts;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *largeTextLayouts;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *valueLabel;

- (void).cxx_destruct;
- (id)darkBackgroundView;
- (id)defaultLayouts;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)largeTextLayouts;
- (id)nameLabel;
- (id)requiredVisualStyleCategories;
- (void)setDarkBackgroundView:(id)arg1;
- (void)setDefaultLayouts:(id)arg1;
- (void)setLargeTextLayouts:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (void)updateLabelConstraints:(bool)arg1;
- (id)valueLabel;

@end
