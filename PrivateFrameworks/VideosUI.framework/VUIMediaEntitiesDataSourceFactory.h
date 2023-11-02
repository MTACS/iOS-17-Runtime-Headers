
@interface VUIMediaEntitiesDataSourceFactory : NSObject

+ (id)_dataSourceForShelfType:(long long)arg1 withLibrary:(id)arg2 withOwnerIdentifier:(id)arg3;
+ (id)_fetchRequestForGenre:(id)arg1;
+ (id)dataSourceForCategoryType:(long long)arg1;
+ (id)dataSourceForCategoryType:(long long)arg1 withFamilyMember:(id)arg2;
+ (id)dataSourceForCategoryType:(long long)arg1 withLibrary:(id)arg2;
+ (id)dataSourceForCategoryType:(long long)arg1 withLibrary:(id)arg2 withOwnerIdentifier:(id)arg3;
+ (id)dataSourceForFetchRequest:(id)arg1 withLibrary:(id)arg2;
+ (id)dataSourceForGenre:(id)arg1 withFamilyMember:(id)arg2;
+ (id)dataSourceForGenre:(id)arg1 withLibrary:(id)arg2;
+ (id)dataSourceForShelf:(long long)arg1 withFamilyMember:(id)arg2;
+ (id)dataSourceForShelf:(long long)arg1 withLibrary:(id)arg2;
+ (id)episodesDataSourceForSeasonIdentifier:(id)arg1 showIdentifier:(id)arg2 withFamilyMember:(id)arg3;
+ (id)episodesDataSourceForShowIdentifier:(id)arg1 withFamilyMember:(id)arg2;
+ (id)seasonsDataSourceForSeasonIdentifier:(id)arg1 showIdentifier:(id)arg2 withFamilyMember:(id)arg3;
+ (id)seasonsDataSourceForShowIdentifier:(id)arg1 withFamilyMember:(id)arg2;

@end
