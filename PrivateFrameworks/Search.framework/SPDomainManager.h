
@interface SPDomainManager : NSObject

+ (id)defaultManager;
+ (void)initialize;

- (void)_removeAllDomainsForDisplayIdentifier:(id)arg1;
- (void)applicationWasUninstalled:(id)arg1;
- (id)getBundleIdForDomainNumber:(id)arg1;
- (void)notifyIndexer;
- (void)registerApplication:(id)arg1 withCategories:(id)arg2;
- (bool)siriSuggestionsEnabled;

@end
