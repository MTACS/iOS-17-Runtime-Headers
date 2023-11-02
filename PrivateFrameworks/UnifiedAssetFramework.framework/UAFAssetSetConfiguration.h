
@interface UAFAssetSetConfiguration : NSObject {
    NSArray * _assets;
    NSString * _autoAssetType;
    bool  _disableAssetRemoval;
    NSString * _name;
    NSString * _trialProject;
    NSArray * _usageLimits;
    NSArray * _usageTypes;
    NSDictionary * _usageValues;
}

@property (nonatomic, retain) NSArray *assets;
@property (nonatomic, retain) NSString *autoAssetType;
@property (nonatomic) bool disableAssetRemoval;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *trialProject;
@property (nonatomic, retain) NSArray *usageLimits;
@property (nonatomic, retain) NSArray *usageTypes;
@property (nonatomic, retain) NSDictionary *usageValues;

+ (id)fromContentsOfURL:(id)arg1 error:(id*)arg2;
+ (bool)isValid:(id)arg1 error:(id*)arg2;
+ (id)supportedFileVersions;

- (void).cxx_destruct;
- (int)_usageCountForUsageType:(id)arg1 usingUsages:(id)arg2;
- (id)assets;
- (id)autoAssetType;
- (bool)disableAssetRemoval;
- (id)getAutoAssets:(id)arg1;
- (id)getFilteredUsages:(id)arg1;
- (id)getTrialAssets:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isUsageLimitExceeded:(id)arg1;
- (id)name;
- (void)setAssets:(id)arg1;
- (void)setAutoAssetType:(id)arg1;
- (void)setDisableAssetRemoval:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setTrialProject:(id)arg1;
- (void)setUsageLimits:(id)arg1;
- (void)setUsageTypes:(id)arg1;
- (void)setUsageValues:(id)arg1;
- (id)trialProject;
- (id)usageLimits;
- (id)usageTypes;
- (id)usageValues;

@end
