
@interface WDMedicalRecordBrandView : UIView {
    UILabel * _brandDetailLabel;
    UILabel * _brandSubtitleLabel;
    UILabel * _brandTitleLabel;
    <HKClinicalBrandable> * _brandable;
    WDClinicalSourcesDataProvider * _dataProvider;
    UIView * _logoAlignedContentView;
    WDBrandLogoView * _logoView;
    UIStackView * _stackView;
    UIStackView * _verticalSpecContainerView;
}

@property (nonatomic, readonly) UILabel *brandDetailLabel;
@property (nonatomic, readonly) UILabel *brandSubtitleLabel;
@property (nonatomic, readonly) UILabel *brandTitleLabel;
@property (nonatomic, readonly) <HKClinicalBrandable> *brandable;
@property (nonatomic, readonly) WDClinicalSourcesDataProvider *dataProvider;
@property (nonatomic, readonly) UIView *logoAlignedContentView;
@property (nonatomic) double logoSize;
@property (nonatomic, readonly) WDBrandLogoView *logoView;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) UIStackView *verticalSpecContainerView;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateBasedOnAccessibilityCategory:(bool)arg1;
- (void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (void)_updateLabelVisibility;
- (id)brandDetailLabel;
- (id)brandSubtitleLabel;
- (id)brandTitleLabel;
- (id)brandable;
- (id)dataProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)logoAlignedContentView;
- (double)logoSize;
- (id)logoView;
- (void)setBrandable:(id)arg1 dataProvider:(id)arg2;
- (void)setLogoSize:(double)arg1;
- (id)stackView;
- (id)verticalSpecContainerView;

@end
