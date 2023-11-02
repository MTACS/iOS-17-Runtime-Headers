
@interface SSSearchInAppResultBuilder : SSResultBuilder {
    NSString * _appBundleId;
    NSString * _appName;
    NSString * _searchString;
}

@property (nonatomic, retain) NSString *appBundleId;
@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSString *searchString;

+ (id)buildResultWithAppName:(id)arg1 appBundleId:(id)arg2 searchString:(id)arg3;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)appName;
- (id)buildCommand;
- (id)buildInlineCardSections;
- (id)buildResult;
- (id)initWithAppName:(id)arg1 appBundleId:(id)arg2 searchString:(id)arg3;
- (id)searchString;
- (void)setAppBundleId:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setSearchString:(id)arg1;

@end
