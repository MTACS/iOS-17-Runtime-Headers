
@interface WDClinicalOnboardingLocationCell : WDClinicalLocationCell {
    HKClinicalProvider * _provider;
}

@property (nonatomic, readonly, copy) HKClinicalProvider *provider;

- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2;
- (void)_updateForContentSizeCategory:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (id)provider;
- (void)setProvider:(id)arg1 dataProvider:(id)arg2;

@end
