
@interface NTKUpNextMultilineCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider> {
    UIView * _accessoryView;
    UILayoutGuide * _bodyImageSizingLayoutGuide;
    CLKFont * _boldFont;
    UILayoutGuide * _contentLayoutGuide;
    NTKUpNextImageView * _descriptionImageView;
    CLKUIColoringLabel * _descriptionLine1Label;
    CLKUIColoringLabel * _descriptionLine2Label;
    UILayoutGuide * _descriptionTextLayoutGuide;
    NTKUpNextImageView * _headerImage;
    unsigned int  _headerImageEdge;
    CLKUIColoringLabel * _headerLabel;
    NSArray * _headerWithLeftImageConstraints;
    NSArray * _headerWithNoImageConstraints;
    NSArray * _headerWithRightImageConstraints;
    CLKFont * _italicFont;
    bool  _showingDescriptionAccessory;
    bool  _showingDescriptionImage;
    bool  _showingHeader;
    bool  _showingHeaderImage;
    bool  _showingImageAccessory;
    bool  _showingThirdLine;
    CLKFont * _standardFont;
    bool  _usingStretchableImage;
    NSArray * _withAccessoryConstraints;
    NSArray * _withDescription2Constraints;
    NSArray * _withDescriptionImageViewConstraints;
    NSArray * _withHeaderConstraints;
    NSArray * _withStretchableDescriptionImageViewConstraints;
    NSArray * _withoutAccessoryConstraints;
    NSArray * _withoutDescription2Constraints;
    NSArray * _withoutDescriptionImageViewConstraints;
    NSArray * _withoutHeaderConstraints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })suggestedBodyImageSizeForDevice:(id)arg1;

- (void).cxx_destruct;
- (id)colorForView:(id)arg1 accented:(bool)arg2;
- (void)configureWithContent:(id)arg1;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)filtersForView:(id)arg1 style:(long long)arg2;
- (id)filtersForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setFilterProvider:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateConstraints;
- (void)updateMonochromeColor;

@end
