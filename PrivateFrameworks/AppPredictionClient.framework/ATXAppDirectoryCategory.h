
@interface ATXAppDirectoryCategory : NSObject <NSSecureCoding> {
    NSArray * _appBundleIDs;
    unsigned long long  _categoryID;
    NSString * _localizedName;
}

@property (nonatomic, readonly) NSArray *appBundleIDs;
@property (nonatomic, readonly) unsigned long long categoryID;
@property (nonatomic, readonly) NSString *localizedName;

+ (bool)_instanceSpecificLocalizedStringExistsForCategory:(unsigned long long)arg1;
+ (unsigned long long)_parentCategoryForiTunesGenreID:(unsigned long long)arg1;
+ (unsigned long long)appDirectoryCategoryStringToAppDirectoryCategoryID:(id)arg1;
+ (id)categoryIdentifierForScreenTimeCategoryID:(unsigned long long)arg1;
+ (bool)isCategory:(unsigned long long)arg1 descendantOfCategory:(unsigned long long)arg2;
+ (bool)isCategoryScreenTime:(unsigned long long)arg1;
+ (bool)isCategorySpecial:(unsigned long long)arg1;
+ (bool)isCategoryiTunesGamesSubgenre:(unsigned long long)arg1;
+ (bool)isCategoryiTunesGenre:(unsigned long long)arg1;
+ (id)localizedStringForCategoryID:(unsigned long long)arg1;
+ (id)localizedStringForNonScreenTimeCategoryID:(unsigned long long)arg1;
+ (unsigned long long)parentCategoryForCategory:(unsigned long long)arg1;
+ (unsigned long long)screenTimeCategoryIDForCategoryIdentifier:(id)arg1;
+ (bool)shouldCategoryAlwaysMergeWithParent:(unsigned long long)arg1;
+ (bool)shouldCategoryNeverMergeWithParent:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleIDs;
- (unsigned long long)categoryID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCategoryID:(unsigned long long)arg1 appBundleIDs:(id)arg2;
- (id)initWithCategoryID:(unsigned long long)arg1 appBundleIDs:(id)arg2 localizedName:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)localizedName;
- (id)localizedStringForCategoryID:(unsigned long long)arg1;
- (void)updateAppBundleIDs:(id)arg1;
- (void)updateCategoryLocalizedNameWithName:(id)arg1;

@end
