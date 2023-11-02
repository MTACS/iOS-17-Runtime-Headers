
@interface UAFAssetExpansion : NSObject {
    NSString * _autoAssetSpecifierTemplate;
    NSArray * _requiredUsageTypes;
    NSString * _trialFactorFallbackTemplate;
    NSString * _trialFactorTemplate;
    NSDictionary * _usageValues;
}

@property (nonatomic, retain) NSString *autoAssetSpecifierTemplate;
@property (nonatomic, retain) NSArray *requiredUsageTypes;
@property (nonatomic, retain) NSString *trialFactorFallbackTemplate;
@property (nonatomic, retain) NSString *trialFactorTemplate;
@property (nonatomic, retain) NSDictionary *usageValues;

+ (id)getTemplatePart:(id)arg1;
+ (bool)isValid:(id)arg1 validUsageTypes:(id)arg2 error:(id*)arg3;
+ (bool)isValidTemplate:(id)arg1 validUsageTypes:(id)arg2 error:(id*)arg3;
+ (id)specializeTemplate:(id)arg1 usages:(id)arg2 invalid:(bool*)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)autoAssetSpecifierTemplate;
- (id)getAutoAssetSpecifier:(id)arg1;
- (id)getTrialFactorFallbackName:(id)arg1;
- (id)getTrialFactorName:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isValidUsages:(id)arg1;
- (id)requiredUsageTypes;
- (void)setAutoAssetSpecifierTemplate:(id)arg1;
- (void)setRequiredUsageTypes:(id)arg1;
- (void)setTrialFactorFallbackTemplate:(id)arg1;
- (void)setTrialFactorTemplate:(id)arg1;
- (void)setUsageValues:(id)arg1;
- (id)specializeTemplate:(id)arg1 usages:(id)arg2;
- (id)trialFactorFallbackTemplate;
- (id)trialFactorTemplate;
- (id)usageValues;

@end
