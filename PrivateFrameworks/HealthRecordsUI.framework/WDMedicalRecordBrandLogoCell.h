
@interface WDMedicalRecordBrandLogoCell : WDMedicalRecordGroupableCell {
    WDMedicalRecordBrandView * _brandView;
    UIImageView * _disclosureChevronView;
    WDBrandLogoView * _logoView;
    bool  _showDisclosureChevron;
}

@property (nonatomic, readonly) WDMedicalRecordBrandView *brandView;
@property (nonatomic, readonly) <HKClinicalBrandable> *brandable;
@property (nonatomic, readonly) WDClinicalSourcesDataProvider *dataProvider;
@property (nonatomic, readonly) UIImageView *disclosureChevronView;
@property (nonatomic) double logoSize;
@property (nonatomic, readonly) WDBrandLogoView *logoView;
@property (getter=showsDisclosureChevron, nonatomic) bool showDisclosureChevron;

- (void).cxx_destruct;
- (id)_contentViewMarginsGuide;
- (void)_updateBasedOnAccessibilityCategory:(bool)arg1;
- (void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2;
- (id)brandView;
- (id)brandable;
- (id)dataProvider;
- (id)disclosureChevronView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)logoSize;
- (id)logoView;
- (void)prepareForReuse;
- (void)setBrandable:(id)arg1 dataProvider:(id)arg2;
- (void)setLogoSize:(double)arg1;
- (void)setShowDisclosureChevron:(bool)arg1;
- (void)setUpConstraints;
- (void)setupSubviews;
- (bool)showsDisclosureChevron;
- (void)updateConstraints;

@end
