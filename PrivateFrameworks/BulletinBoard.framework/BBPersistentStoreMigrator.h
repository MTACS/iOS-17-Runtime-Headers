
@interface BBPersistentStoreMigrator : NSObject

+ (void)_migrateContentPreviewSettings:(id)arg1;
+ (void)_migrateSectionIDs:(id)arg1;
+ (void)_removeVestigialSections:(id)arg1;
+ (id)_sectionIDsToMigrate;
+ (id)_sectionIdentifiersForNonDefaultSectionCategoriesFromSectionInfos:(id)arg1;
+ (id)_sectionIdentifiersForWeeAppsFromSectionInfos:(id)arg1;
+ (void)migrateSectionInfoForStore:(id)arg1;
+ (bool)removeSavedChronologicalSectionInfos:(id)arg1;

@end
