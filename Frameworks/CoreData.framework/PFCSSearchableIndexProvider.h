
@interface PFCSSearchableIndexProvider : NSObject

- (id)createPrivateSearchableIndexWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3;
- (id)createPrivateSearchableIndexWithPath:(id)arg1;
- (id)createSearchableIndexWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3;
- (id)defaultPrivateSearchableIndex;
- (id)defaultSearchableIndex;

@end
