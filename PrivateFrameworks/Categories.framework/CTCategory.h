
@interface CTCategory : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSString * _canonicalBundleIdentifier;
    NSArray * _equivalentBundleIdentifiers;
    NSString * _identifier;
    NSString * _primaryWebDomain;
    NSArray * _webDomains;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *canonicalBundleIdentifier;
@property (nonatomic, readonly, copy) NSArray *equivalentBundleIdentifiers;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, copy) NSString *primaryWebDomain;
@property (nonatomic, copy) NSArray *webDomains;

+ (id)_DHIDtoCategoryDisplayNameMap;
+ (id)_DHToAppStoreCategoriesMap;
+ (id)_appBundleIdentifierStringFor:(id)arg1 categoryIdentifier:(id)arg2;
+ (id)_bundleIdentifierForContextResponse:(id)arg1;
+ (id)_equivalentBundleIDsMapping;
+ (id)_equivalentBundleIDsMappingForWatchOSBundleID:(id)arg1;
+ (id)_getAssociatedDomainsForHostNames:(id)arg1;
+ (void)_getCategoryTypeForDomainName:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (id)_getEquivalentBundleIdentifiers:(id)arg1;
+ (id)_identifierForContextResponse:(id)arg1;
+ (void)_lookupAppStoreUsing:(id)arg1 platform:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (id)_newXpcConnection;
+ (id)_overrideEquivalentIdentifiers:(id)arg1 forBundleID:(id)arg2;
+ (id)_relatedItemsForContextResponse:(id)arg1;
+ (id)_schemeRemovedEquivalentBundleIDsMapping:(id)arg1;
+ (id)_urlComponentsForHostName:(id)arg1;
+ (id)_urlStringsForHostNames:(id)arg1;
+ (id)_xpcConnection;
+ (id)bundleIDForPlatform:(id)arg1 fromBundleID:(id)arg2 platform:(id)arg3;
+ (void)categoryForBundleID:(id)arg1 platform:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)categoryForBundleID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)categoryForBundleIdentifiers:(id)arg1 platform:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)categoryForDomainName:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)categoryForDomainNames:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)categoryForDomainURL:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)categoryForDomainURLs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (id)equivalentIdentifiersForBundleID:(id)arg1;
+ (void)initialize;
+ (id)itemWith:(id)arg1 platform:(id)arg2 array:(id)arg3;
+ (id)localizedNameForIdentifier:(id)arg1;
+ (id)parentAppBundleIdentifierForAppRecord:(id)arg1;
+ (id)primaryLocalizedNameForIdentifier:(id)arg1;
+ (id)schemeStringForPlatform:(id)arg1;
+ (id)shortLocalizedNameForIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)systemAppCategoryIdentifierForBundleIdentifier:(id)arg1;
+ (id)systemCategoryIDWithPatternMatching:(id)arg1;

- (void).cxx_destruct;
- (void)_ctCategoryCommonInitWithIdentifier:(id)arg1 equivalentBundleIdentifiers:(id)arg2 webDomains:(id)arg3 bundleIdentifier:(id)arg4 primaryWebDomain:(id)arg5 canonicalBundleIdentifier:(id)arg6;
- (id)bundleIdentifier;
- (id)canonicalBundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalentBundleIdentifers;
- (id)equivalentBundleIdentifiers;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 equivalentBundleIdentifiers:(id)arg2 webDomains:(id)arg3 bundleIdentifier:(id)arg4;
- (id)initWithIdentifier:(id)arg1 equivalentBundleIdentifiers:(id)arg2 webDomains:(id)arg3 bundleIdentifier:(id)arg4 primaryWebDomain:(id)arg5;
- (id)initWithIdentifier:(id)arg1 equivalentBundleIdentifiers:(id)arg2 webDomains:(id)arg3 bundleIdentifier:(id)arg4 primaryWebDomain:(id)arg5 canonicalBundleIdentifier:(id)arg6;
- (id)initWithIdentifier:(id)arg1 webDomains:(id)arg2 bundleIdentifier:(id)arg3;
- (id)initWithIdentifier:(id)arg1 webDomains:(id)arg2 bundleIdentifier:(id)arg3 primaryWebDomain:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCategory:(id)arg1;
- (bool)isSystemBundleIdentifier;
- (id)localizedName;
- (id)primaryWebDomain;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCanonicalBundleIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPrimaryWebDomain:(id)arg1;
- (void)setWebDomains:(id)arg1;
- (id)webDomains;

@end
