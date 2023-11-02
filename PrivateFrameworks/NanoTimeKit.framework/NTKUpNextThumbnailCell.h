
@interface NTKUpNextThumbnailCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider> {
    CLKFont * _boldFont;
    CLKUIColoringLabel * _descriptionLine1Label;
    CLKUIColoringLabel * _descriptionLine2Label;
    CLKUIColoringLabel * _descriptionLine3Label;
    CLKUIColoringLabel * _headerLabel;
    UILayoutGuide * _imageLayoutGuide;
    NSLayoutConstraint * _imageLayoutGuideHeightConstraint;
    NSLayoutConstraint * _imageLayoutGuideWidthConstraint;
    NTKUpNextImageView * _imageView;
    CLKFont * _italicFont;
    UILayoutGuide * _labelLayoutGuide;
    bool  _showingHeader;
    bool  _showingSmallThumbnail;
    bool  _showingThirdLine;
    CLKFont * _standardFont;
    NSArray * _withDescription2Constraints;
    NSArray * _withDescription3Constraints;
    NSArray * _withHeaderConstraints;
    NSArray * _withoutDescription2Constraints;
    NSArray * _withoutDescription3Constraints;
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
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateConstraints;
- (void)updateMonochromeColor;

@end
