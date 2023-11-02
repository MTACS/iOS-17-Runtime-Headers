
@interface WDClinicalSettingsViewAnalyticsDataCell : UITableViewCell {
    Class  _viewControllerClass;
}

@property (nonatomic, retain) Class viewControllerClass;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setViewControllerClass:(Class)arg1;
- (Class)viewControllerClass;

@end
