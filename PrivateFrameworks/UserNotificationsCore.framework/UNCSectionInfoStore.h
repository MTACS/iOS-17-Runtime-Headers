
@interface UNCSectionInfoStore : NSObject {
    UNCBulletinServerConnection * _bbServerConnection;
    NSObject<OS_dispatch_queue> * _gatewayQueue;
    UNCNotificationSettingsPersistentStore * _persistence;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _queue_activeSectionIDs;
    NSMutableDictionary * _queue_clearedSectionsByID;
    NSMutableDictionary * _queue_sectionInfoByID;
    NSMutableArray * _queue_sortedSectionIDs;
    UNCEffectiveSettings * _settings;
}

- (void).cxx_destruct;
- (id)_queue_effectiveSectionInfoForSectionInfo:(id)arg1;
- (void)_queue_removeSectionWithID:(id)arg1;
- (id)_queue_sectionInfoForSectionID:(id)arg1 effective:(bool)arg2;
- (void)_queue_sortSectionIDs:(id)arg1 usingGuideArray:(id)arg2;
- (id)_queue_sortedSectionInfoForSectionIDs:(id)arg1 effective:(bool)arg2;
- (id)activeSectionIDs;
- (void)addActiveSectionID:(id)arg1;
- (id)allSortedActiveSections:(bool)arg1;
- (id)allSortedSectionInfo:(bool)arg1;
- (id)allUnsortedSectionInfoIDs;
- (id)clearedInfoForSectionID:(id)arg1;
- (id)clearedSectionsByID;
- (id)effectiveSectionInfoForSectionInfo:(id)arg1;
- (id)initWithEffectiveSettings:(id)arg1 persistence:(id)arg2;
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
