
@interface HKQuantitySeriesTableViewCell : UITableViewCell {
    NSArray * _currentConstraints;
}

@property (nonatomic, retain) NSArray *currentConstraints;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_configureLabels;
- (void)_configureLayoutForTraitCollection:(id)arg1;
- (id)_makeAccessibilityConstraints;
- (id)_makeConstraints;
- (id)currentConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setCurrentConstraints:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
