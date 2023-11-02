
@interface STHistoricalNotificationsCell : STTableCell {
    STHistoricalUsageViewController * _historicalUsageViewController;
}

@property (readonly) STHistoricalUsageViewController *historicalUsageViewController;

- (void).cxx_destruct;
- (void)_currentViewModeDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)_handleEffectiveChangeForViewMode:(long long)arg1 hasMultilineLayout:(bool)arg2;
- (void)_hasMulitlineLayoutDidChangeFrom:(bool)arg1 to:(bool)arg2;
- (void)dealloc;
- (id)historicalUsageViewController;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setValue:(id)arg1;
- (id)value;

@end
