
@protocol BBSectionInfoStoreInterface <NSObject>

@required

- (NSSet *)activeSectionIDs;
- (void)addActiveSectionID:(NSString *)arg1;
- (NSArray *)allSortedActiveSections:(bool)arg1;
- (NSArray *)allSortedSectionInfo:(bool)arg1;
- (NSArray *)allUnsortedSectionInfoIDs;
- (NSDate *)clearedInfoForSectionID:(NSString *)arg1;
- (NSDictionary *)clearedSectionsByID;
- (BBSectionInfo *)effectiveSectionInfoForSectionInfo:(BBSectionInfo *)arg1;
- (void)removeSectionWithID:(NSString *)arg1;
- (NSDictionary *)sectionInfoByID;
- (BBSectionInfo *)sectionInfoForSectionID:(NSString *)arg1 effective:(bool)arg2;
- (NSDictionary *)sectionInfosByIDForSectionIDs:(NSSet *)arg1 effective:(bool)arg2;
- (void)setClearedInfo:(NSDate *)arg1 forSectionID:(NSString *)arg2;
- (void)setClearedSectionsByID:(NSDictionary *)arg1;
- (void)setSectionInfo:(BBSectionInfo *)arg1 forSectionID:(NSString *)arg2;
- (void)setSectionInfoByID:(NSDictionary *)arg1;
- (NSArray *)sortedSectionIDs;
- (NSArray *)sortedSectionInfoForSectionIDs:(NSSet *)arg1 effective:(bool)arg2;

@end
