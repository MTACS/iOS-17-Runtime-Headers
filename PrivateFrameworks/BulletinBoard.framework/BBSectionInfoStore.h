
@interface BBSectionInfoStore : NSObject <BBSectionInfoStoreInterface> {
    NSMutableSet * _activeSectionIDs;
    NSMutableDictionary * _clearedSectionsByID;
    <BBEffectiveSettingsProvider> * _effectiveSettings;
    <BBPersistentStoreInterface> * _persistence;
    NSMutableDictionary * _sectionInfoByID;
    NSMutableArray * _sortedSectionIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_sortSectionIDs:(id)arg1 usingGuideArray:(id)arg2;
- (id)activeSectionIDs;
- (void)addActiveSectionID:(id)arg1;
- (id)allSortedActiveSections:(bool)arg1;
- (id)allSortedSectionInfo:(bool)arg1;
- (id)allUnsortedSectionInfoIDs;
- (id)clearedInfoForSectionID:(id)arg1;
- (id)clearedSectionsByID;
- (id)effectiveSectionInfoForSectionInfo:(id)arg1;
- (id)initWithEffectiveSettingsProvider:(id)arg1 persistence:(id)arg2;
- (void)removeSectionWithID:(id)arg1;
- (id)sectionInfoByID;
- (id)sectionInfoForSectionID:(id)arg1 effective:(bool)arg2;
- (id)sectionInfosByIDForSectionIDs:(id)arg1 effective:(bool)arg2;
- (void)setClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (void)setClearedSectionsByID:(id)arg1;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)setSectionInfoByID:(id)arg1;
- (id)sortedSectionIDs;
- (id)sortedSectionInfoForSectionIDs:(id)arg1 effective:(bool)arg2;

@end
