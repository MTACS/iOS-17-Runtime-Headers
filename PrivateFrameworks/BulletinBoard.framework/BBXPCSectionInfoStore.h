
@interface BBXPCSectionInfoStore : NSObject <BBSectionInfoStoreInterface> {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSXPCConnection * _settingsPersistenceConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_ensureSettingsPersistenceConnection;
- (void)_resetSettingsPersistenceConnection;
- (id)activeSectionIDs;
- (void)addActiveSectionID:(id)arg1;
- (id)allSortedActiveSections:(bool)arg1;
- (id)allSortedSectionInfo:(bool)arg1;
- (id)allUnsortedSectionInfoIDs;
- (id)asyncServerProxyObject;
- (id)clearedInfoForSectionID:(id)arg1;
- (id)clearedSectionsByID;
- (id)effectiveSectionInfoForSectionInfo:(id)arg1;
- (id)init;
- (void)removeSectionWithID:(id)arg1;
- (id)sectionInfoByID;
- (id)sectionInfoForSectionID:(id)arg1 effective:(bool)arg2;
- (id)sectionInfosByIDForSectionIDs:(id)arg1 effective:(bool)arg2;
- (id)serverProxyObject;
- (void)setClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (void)setClearedSectionsByID:(id)arg1;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)setSectionInfoByID:(id)arg1;
- (id)sortedSectionIDs;
- (id)sortedSectionInfoForSectionIDs:(id)arg1 effective:(bool)arg2;

@end
