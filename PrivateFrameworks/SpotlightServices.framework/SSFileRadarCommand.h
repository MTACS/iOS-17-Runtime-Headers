
@interface SSFileRadarCommand : SFCommand {
    NSArray * _attachmentPaths;
    NSString * _classification;
    unsigned long long  _componentID;
    NSString * _componentName;
    NSString * _componentVersion;
    NSArray * _extensionIdentifiers;
    NSString * _problemDescription;
    SPSearchQueryContext * _queryContext;
    SSRankingManager * _rankingManager;
    NSString * _reproducibility;
    NSArray * _sections;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *attachmentPaths;
@property (nonatomic, retain) NSString *classification;
@property (nonatomic) unsigned long long componentID;
@property (nonatomic, retain) NSString *componentName;
@property (nonatomic, retain) NSString *componentVersion;
@property (nonatomic, retain) NSArray *extensionIdentifiers;
@property (nonatomic, retain) NSString *problemDescription;
@property (nonatomic, retain) SPSearchQueryContext *queryContext;
@property (nonatomic, retain) SSRankingManager *rankingManager;
@property (nonatomic, retain) NSString *reproducibility;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, retain) NSString *title;

+ (id)buildVersion;

- (void).cxx_destruct;
- (id)attachmentPaths;
- (id)classification;
- (unsigned long long)componentID;
- (id)componentName;
- (id)componentVersion;
- (id)extensionIdentifiers;
- (id)init;
- (id)initWithQueryContext:(id)arg1;
- (id)initWithQueryString:(id)arg1;
- (id)problemDescription;
- (id)queryContext;
- (id)rankingManager;
- (id)reproducibility;
- (id)sections;
- (void)setAttachmentPaths:(id)arg1;
- (void)setClassification:(id)arg1;
- (void)setComponentID:(unsigned long long)arg1;
- (void)setComponentName:(id)arg1;
- (void)setComponentVersion:(id)arg1;
- (void)setExtensionIdentifiers:(id)arg1;
- (void)setProblemDescription:(id)arg1;
- (void)setQueryContext:(id)arg1;
- (void)setRankingManager:(id)arg1;
- (void)setReproducibility:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
