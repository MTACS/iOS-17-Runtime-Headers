
@interface UAFUsageAliasConfiguration : NSObject {
    UAFConfigurationManager * _assetSetManager;
    NSString * _name;
    NSDictionary * _values;
}

@property (nonatomic, retain) UAFConfigurationManager *assetSetManager;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDictionary *values;

+ (id)fromContentsOfURL:(id)arg1 assetSetManager:(id)arg2 error:(id*)arg3;
+ (bool)isValid:(id)arg1 assetSetManager:(id)arg2 error:(id*)arg3;
+ (id)supportedFileVersions;

- (void).cxx_destruct;
- (id)assetSetManager;
- (id)getAssetSetTrialAssets:(id)arg1 usageValue:(id)arg2;
- (id)getTrialAssets:(id)arg1;
- (id)initWithDictionary:(id)arg1 assetSetManager:(id)arg2;
- (id)name;
- (void)setAssetSetManager:(id)arg1;
- (void)setName:(id)arg1;
- (void)setValues:(id)arg1;
- (id)values;

@end
