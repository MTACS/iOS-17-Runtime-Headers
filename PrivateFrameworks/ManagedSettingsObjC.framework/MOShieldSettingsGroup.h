
@interface MOShieldSettingsGroup : MOSettingsGroup

@property (nonatomic, retain) MOApplicationCategoryShieldPolicy *applicationCategories;
@property (nonatomic, retain) NSSet *applications;
@property (nonatomic, retain) MOWebDomainCategoryShieldPolicy *webDomainCategories;
@property (nonatomic, retain) NSSet *webDomains;

+ (id)applicationCategoriesMetadata;
+ (id)applicationsMetadata;
+ (id)groupName;
+ (id)webDomainCategoriesMetadata;
+ (id)webDomainsMetadata;

- (id)applicationCategories;
- (id)applications;
- (void)setApplicationCategories:(id)arg1;
- (void)setApplications:(id)arg1;
- (void)setWebDomainCategories:(id)arg1;
- (void)setWebDomains:(id)arg1;
- (id)webDomainCategories;
- (id)webDomains;

@end
