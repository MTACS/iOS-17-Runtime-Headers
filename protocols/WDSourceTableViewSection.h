
@protocol WDSourceTableViewSection <NSObject>

@required

- (void)setRestorationSourceBundleIdentifier:(NSString *)arg1;
- (void)setShouldHideHeader:(bool)arg1;
- (void)setSourceListDataSource:(HKSourceListDataSource *)arg1;
- (bool)shouldHideHeader;

@end
