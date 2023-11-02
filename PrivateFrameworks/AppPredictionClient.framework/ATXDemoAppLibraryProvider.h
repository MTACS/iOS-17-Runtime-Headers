
@interface ATXDemoAppLibraryProvider : NSObject

+ (id)_parseCategory:(id)arg1 realCategories:(id)arg2;
+ (id)bundleIdsForCategoryWithName:(id)arg1 in:(id)arg2;
+ (id)demoAppCategoriesForRealAppCategories:(id)arg1;
+ (id)demoAppLibraryPath;
+ (id)demoSuggestionsAndRecents;
+ (bool)isAppLibraryDemoModeEnabled;
+ (id)loadCategoriesFromDisk;

@end
