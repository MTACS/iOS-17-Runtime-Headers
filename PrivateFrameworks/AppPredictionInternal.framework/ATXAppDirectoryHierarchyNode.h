
@interface ATXAppDirectoryHierarchyNode : NSObject {
    NSMutableArray * _appBundleIDs;
    unsigned long long  _categoryID;
    NSMutableArray * _children;
    bool  _enabled;
    ATXAppDirectoryHierarchyNode * _parent;
    unsigned long long  _size;
}

@property (nonatomic, readonly) NSMutableArray *appBundleIDs;
@property (nonatomic, readonly) unsigned long long categoryID;
@property (nonatomic, readonly) NSMutableArray *children;
@property (nonatomic) bool enabled;
@property (nonatomic) ATXAppDirectoryHierarchyNode *parent;
@property (nonatomic) unsigned long long size;

+ (id)dynamicCategoriesForAppBundleIDs:(id)arg1 screenTimeMappings:(id)arg2 iTunesMappings:(id)arg3;
+ (id)initializeHierarchyForAppBundleIDs:(id)arg1 screenTimeMappings:(id)arg2 iTunesMappings:(id)arg3;
+ (id)lazyGetNodeForCategoryID:(id)arg1 inDictionary:(id)arg2;

- (void).cxx_destruct;
- (void)_addAppBundleID:(id)arg1;
- (void)_addChild:(id)arg1;
- (id)_allAppBundleIDs;
- (id)_allNodes;
- (id)_categoryDictionary;
- (void)_computeSize;
- (void)_displayTree;
- (void)_displayTreeWithCurrString:(id)arg1;
- (unsigned long long)_enabledNodeCount;
- (bool)_isRoot;
- (void)_preorderTraverseWithBlock:(id /* block */)arg1;
- (id)appBundleIDs;
- (unsigned long long)categoryID;
- (id)children;
- (bool)enabled;
- (id)initWithCategoryID:(unsigned long long)arg1;
- (id)parent;
- (void)setEnabled:(bool)arg1;
- (void)setParent:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end
