
@interface DRSTeamDampeningConfiguration : NSObject {
    DRSDampeningConfiguration * _defaultConfiguration;
    NSDictionary * _issueCategoryToConfigurationDict;
}

@property (nonatomic, retain) DRSDampeningConfiguration *defaultConfiguration;
@property (nonatomic, retain) NSDictionary *issueCategoryToConfigurationDict;

+ (id)teamIdToTeamDampeningConfigFromPlistDirectoryPath:(id)arg1 errorOut:(id*)arg2;

- (void).cxx_destruct;
- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)arg1 teamID:(id)arg2;
- (id)_initWithTeamDampeningConfigMO_ON_MOC_QUEUE:(id)arg1;
- (id)configurationForIssueCategory:(id)arg1;
- (id)debugDescription;
- (id)defaultConfiguration;
- (id)initWithDefaultConfiguration:(id)arg1 issueCategoryToConfigurationDict:(id)arg2;
- (id)initWithPlistDict:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)issueCategoryToConfigurationDict;
- (id)jsonCompatibleDictRepresentation;
- (void)setDefaultConfiguration:(id)arg1;
- (void)setIssueCategoryToConfigurationDict:(id)arg1;
- (void)updateIssueCategoryConfig:(id)arg1 newConfig:(id)arg2;

@end
