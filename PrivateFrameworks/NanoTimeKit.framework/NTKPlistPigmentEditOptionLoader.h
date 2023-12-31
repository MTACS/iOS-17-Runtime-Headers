
@interface NTKPlistPigmentEditOptionLoader : NSObject {
    NSArray * _additionalBundles;
    NSMutableArray * _bundlePlistsFromFacesWithoutBundle;
    NSNumber * _clhs;
    NSNumber * _family;
    NSBundle * _frameworkBundle;
    bool  _ignoreSensitiveUIItems;
    bool  _includesAllDeviceSpecificColors;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _plistFiles;
    NSDictionary * _sharedConfigs;
    NSNumber * _sku;
    NSArray * _sortedAdditionalPlistFiles;
}

@property (nonatomic, retain) NSArray *additionalBundles;
@property (nonatomic, retain) NSMutableArray *bundlePlistsFromFacesWithoutBundle;
@property (nonatomic, retain) NSNumber *clhs;
@property (nonatomic, retain) NSNumber *family;
@property (nonatomic, retain) NSBundle *frameworkBundle;
@property (nonatomic) bool ignoreSensitiveUIItems;
@property (nonatomic) bool includesAllDeviceSpecificColors;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSArray *plistFiles;
@property (nonatomic, retain) NSDictionary *sharedConfigs;
@property (nonatomic, retain) NSNumber *sku;
@property (nonatomic, retain) NSArray *sortedAdditionalPlistFiles;

+ (long long)compareColorFileNames:(id)arg1 otherFileName:(id)arg2 fileExtension:(id)arg3;
+ (long long)compareSeasonName:(id)arg1 otherSeasonName:(id)arg2;
+ (long long)compareSeasonWithoutYear:(id)arg1 otherSeasonNameWithoutYear:(id)arg2;
+ (bool)containsReservedKey:(id)arg1 inDictionary:(id)arg2;
+ (bool)containsSeasonNamePrefix:(id)arg1;
+ (id)extractNameFromFullFileName:(id)arg1 fileExtension:(id)arg2;
+ (long long)extractYearFromSeasonName:(id)arg1;
+ (id)indexForSeasonName:(id)arg1;
+ (id)modifyContentRootForImplicitCollectionsIfNeeded:(id)arg1;
+ (id)seasonNames;
+ (id)sortedCollectionNamesFromCollections:(id)arg1;
+ (id)sortedColorFileNames:(id)arg1;
+ (id)sortedUniqueOptionNamesFromCollections:(id)arg1;

- (void).cxx_destruct;
- (id)additionalBundles;
- (id)alternativePropertyNamesForProperty:(id)arg1 inNode:(id)arg2;
- (id)alternativePropertyNamesForProperty:(id)arg1 inNode:(id)arg2 includesAllDeviceSpecificColors:(bool)arg3;
- (void)applyConfigurationOnEditOption:(id)arg1 configuration:(id)arg2;
- (id)bundlePlistsFromFacesWithoutBundle;
- (id)clhs;
- (id)colorOptionsFromItemsDictionary:(id)arg1 collectionName:(id)arg2 applyConfig:(id)arg3 plistSuffix:(id)arg4 bundle:(id)arg5;
- (id)colorOptionsFromPListItems:(id)arg1 collectionName:(id)arg2 applyConfig:(id)arg3 plistSuffix:(id)arg4 bundle:(id)arg5;
- (id)configurationFromNode:(id)arg1;
- (id)configurationFromNode:(id)arg1 collectionName:(id)arg2;
- (id)configurationWithName:(id)arg1 fromNode:(id)arg2 collectionName:(id)arg3;
- (id)copyItemsApplyingConfiguration:(id)arg1 configuration:(id)arg2;
- (id)discoverCollectionWithName:(id)arg1 contentRoot:(id)arg2 collectionsRoot:(id)arg3 discoveredCollections:(id)arg4 privateDiscoveredCollections:(id)arg5 discoveredInvalidCollections:(id)arg6 invalidDependecies:(id)arg7 hasCycle:(out bool*)arg8 plistSuffix:(id)arg9 bundle:(id)arg10;
- (void)enumerateColorEditOptionFilesInBundle:(id)arg1 sorted:(bool)arg2 block:(id /* block */)arg3;
- (id)extractSuffixFromFileName:(id)arg1;
- (id)family;
- (id)frameworkBundle;
- (bool)hasFileLevelSensitiveUIConfig:(id)arg1;
- (bool)ignoreSensitiveUIItems;
- (id)importedCollectionsFromImports:(id)arg1 propertyName:(id)arg2 sharedCollectionsRoot:(id)arg3 parent:(id)arg4 discoveredCollections:(id)arg5 privateDiscoveredCollections:(id)arg6 discoveredInvalidCollections:(id)arg7 invalidDependencies:(id)arg8 hasCycle:(out bool*)arg9 plistSuffix:(id)arg10 bundle:(id)arg11;
- (id)importedCollectionsWithNode:(id)arg1 sharedCollectionsRoot:(id)arg2 parent:(id)arg3 discoveredCollections:(id)arg4 privateDiscoveredCollections:(id)arg5 discoveredInvalidCollections:(id)arg6 invalidDependencies:(id)arg7 hasCycle:(out bool*)arg8 plistSuffix:(id)arg9 bundle:(id)arg10;
- (bool)includesAllDeviceSpecificColors;
- (id)init;
- (id)initWithBundle:(id)arg1;
- (id)initWithPlistFiles:(id)arg1;
- (bool)isValidPigment:(id)arg1;
- (id)itemsFromNode:(id)arg1 collectionName:(id)arg2 applyingConfig:(id)arg3 plistSuffix:(id)arg4 bundle:(id)arg5;
- (id)loadFaceCollectionForAllSlotsForDomain:(id)arg1 propertyList:(id)arg2 bundle:(id)arg3 sharedCollections:(id)arg4;
- (id)loadFaceCollectionForDomain:(id)arg1 contentRoot:(id)arg2 faceCollectionsRoot:(id)arg3 sharedCollections:(id)arg4 plistSuffix:(id)arg5 bundle:(id)arg6;
- (id)loadFaceCollectionForDomain:(id)arg1 mainBundle:(id)arg2 faceBundle:(id)arg3 additionalBundles:(id)arg4 sharedCollections:(id)arg5;
- (id)loadNestedCollectionsFromNode:(id)arg1 parent:(id)arg2 config:(id)arg3 plistSuffix:(id)arg4 bundle:(id)arg5;
- (id)loadPropertyListFromFile:(id)arg1;
- (id)loadSharedCollections;
- (id)loadSharedCollectionsInMainBundle:(id)arg1 additionalBundles:(id)arg2;
- (id)loadSharedCollectionsWithPropertyList:(id)arg1 bundle:(id)arg2;
- (id)loadSharedConfigWithPropertyList:(id)arg1 bundle:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)mergeCollections:(id)arg1 withCollections:(id)arg2;
- (void)mergeConfigs:(id)arg1 withConfigs:(id)arg2;
- (id)parseColorOptionsForDomain:(id)arg1 bundle:(id)arg2;
- (id)parseColorOptionsForDomain:(id)arg1 bundle:(id)arg2 sharedCollections:(id)arg3;
- (id)plistFacesWithoutFaceBundle;
- (id)plistFiles;
- (void)setAdditionalBundles:(id)arg1;
- (void)setBundlePlistsFromFacesWithoutBundle:(id)arg1;
- (void)setClhs:(id)arg1;
- (void)setFamily:(id)arg1;
- (void)setFrameworkBundle:(id)arg1;
- (void)setIgnoreSensitiveUIItems:(bool)arg1;
- (void)setIncludesAllDeviceSpecificColors:(bool)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setPlistFiles:(id)arg1;
- (void)setSharedConfigs:(id)arg1;
- (void)setSku:(id)arg1;
- (void)setSortedAdditionalPlistFiles:(id)arg1;
- (id)sharedConfigs;
- (id)sku;
- (id)skuFileLevel:(id)arg1;
- (id)sortedAdditionalPlistFiles;
- (id)sortedColorPListBundles:(id)arg1;
- (id)sortedPlistFilesWithMainBundle:(id)arg1 faceBundle:(id)arg2 additionalBundles:(id)arg3;

@end
