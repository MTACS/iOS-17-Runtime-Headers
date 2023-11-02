
@interface LRRCdmTrialAssetManager : NSObject {
    NSLocale * _locale;
    NSArray * _namespaces;
    TRIClient * _nlTRIClient;
    NSDictionary * _trialCompatibilityVersions;
    NSDictionary * _trialIdentifiers;
}

@property (nonatomic, readonly) NSLocale *locale;

- (void).cxx_destruct;
- (id)fetchCompatibilityVersion;
- (unsigned int)fetchCompatibilityVersionForNamespace:(id)arg1;
- (id)fetchRolloutStatus;
- (id)fetchRolloutStatusForNamespace:(id)arg1;
- (id)getAssetInfo:(id)arg1;
- (void)initTRIClient;
- (id)initWithLocale:(id)arg1 forNamespaces:(id)arg2;
- (id)locale;

@end
