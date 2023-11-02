
@interface PSBillingPeriodSelectorSpecifier : PSSpecifier <PSBillingPeriodSource> {
    <PSBillingPeriodSelectorSpecifierDelegate> * _delegate;
    unsigned long long  _selectedPeriod;
}

@property (nonatomic) <PSBillingPeriodSelectorSpecifierDelegate> *delegate;
@property (nonatomic) unsigned long long selectedPeriod;

- (void).cxx_destruct;
- (id)delegate;
- (id)getBillingPeriod:(id)arg1;
- (id)getLogger;
- (id)initWithStatisticsCache:(id)arg1;
- (void)refreshSelectorWithStatisticsCache:(id)arg1;
- (unsigned long long)selectedPeriod;
- (void)setBillingPeriod:(id)arg1 specifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSelectedPeriod:(unsigned long long)arg1;

@end
