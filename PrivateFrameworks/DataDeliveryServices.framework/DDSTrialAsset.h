
@interface DDSTrialAsset : DDSAsset {
    NSString * _description;
    DDSTrialExperimentIdentifiers * _experimentIdentifiers;
}

@property (readonly, copy) DDSTrialExperimentIdentifiers *experimentIdentifiers;

+ (id)attributesWithLocalURL:(id)arg1;
+ (id)createWithExperimentIdentifiers:(id)arg1 localURL:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)experimentIdentifiers;
- (unsigned long long)hash;
- (id)initWithExperimentIdentifiers:(id)arg1 attributes:(id)arg2 localURL:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
