
@interface UAFConfigurationManager : NSObject {
    NSArray * _baseURLs;
}

@property (nonatomic, retain) NSArray *baseURLs;

+ (id)defaultManager;

- (void).cxx_destruct;
- (id)applySubscriptions:(id)arg1;
- (id)baseURLs;
- (id)getAllAssetSets;
- (id)getAssetSet:(id)arg1;
- (id)getUsageAlias:(id)arg1;
- (id)initWithURLs:(id)arg1;
- (bool)isUsageLimitExceeded:(id)arg1;
- (void)setBaseURLs:(id)arg1;

@end
