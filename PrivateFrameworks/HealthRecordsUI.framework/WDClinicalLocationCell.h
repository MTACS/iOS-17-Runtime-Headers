
@interface WDClinicalLocationCell : UITableViewCell {
    <HKClinicalBrandable> * _brandable;
    WDClinicalSourcesDataProvider * _dataProvider;
    UILabel * _detailLabel;
    WDBrandLogoView * _logoView;
    UIStackView * _stackView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) <HKClinicalBrandable> *brandable;
@property (nonatomic, readonly) WDClinicalSourcesDataProvider *dataProvider;
@property (nonatomic, readonly) UILabel *detailLabel;
@property (nonatomic, readonly) WDBrandLogoView *logoView;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (void)_configureDistinctIntrinsicLayoutPrioritiesForLabels;
- (void)_setUpConstraints;
- (void)_setupSubviews;
- (void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (id)brandable;
- (id)dataProvider;
- (id)detailLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)logoView;
- (void)prepareForReuse;
- (void)setBrandable:(id)arg1 dataProvider:(id)arg2;
- (id)stackView;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willDisplay;

@end
