
@interface UAFAssetConfiguration : NSObject {
    NSArray * _expansions;
    NSString * _name;
    NSString * _trialMAAssetType;
    NSDictionary * _trialMATargetingTemplate;
    NSString * _trialNamespace;
}

@property (nonatomic, retain) NSArray *expansions;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *trialMAAssetType;
@property (nonatomic, retain) NSDictionary *trialMATargetingTemplate;
@property (nonatomic, retain) NSString *trialNamespace;

+ (bool)isValid:(id)arg1 validUsageTypes:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)expansions;
- (id)getAutoAssetSpecifier:(id)arg1;
- (id)getTrialFactorFallbackName:(id)arg1;
- (id)getTrialFactorName:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)name;
- (void)setExpansions:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTrialMAAssetType:(id)arg1;
- (void)setTrialMATargetingTemplate:(id)arg1;
- (void)setTrialNamespace:(id)arg1;
- (id)trialMAAssetType;
- (id)trialMATargetingTemplate;
- (id)trialNamespace;

@end
