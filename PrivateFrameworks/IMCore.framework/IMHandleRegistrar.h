
@interface IMHandleRegistrar : NSObject {
    NSMutableDictionary * _CNIDToHandlesMap;
    NSMutableDictionary * _IDToHandlesMap;
    NSHashTable * _allIMHandles;
    IMBusinessNameManager * _businessNameManager;
    NSMutableDictionary * _siblingsMap;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)CNIDToHandlesMap;
- (id)IDToHandlesMap;
- (id)_accountSiblingsForHandle:(id)arg1;
- (void)_addIMHandleToIDToHandlesMap:(id)arg1;
- (void)_addressBookChanged;
- (void)_buildSiblingsForIMHandle:(id)arg1;
- (id)_chatSiblingsForHandle:(id)arg1;
- (void)_clearSiblingsCacheForIMHandle:(id)arg1 rebuildAfter:(bool)arg2;
- (void)_dumpOutAllIMHandles;
- (void)_dumpOutAllIMHandlesForAccount:(id)arg1;
- (void)_emptySiblingCacheForIMHandleGUID:(id)arg1;
- (id)_existingAccountSiblingsForHandle:(id)arg1;
- (id)_existingChatSiblingsForHandle:(id)arg1;
- (void)_handleAddContactChangeHistoryEvent:(id)arg1;
- (void)_handleDeleteContactChangeHistoryEvent:(id)arg1;
- (void)_handleDropEverythingChangeHistoryEvent;
- (void)_handleUpdateContactChangeHistoryEvent:(id)arg1;
- (void)_postContactChangeHistoryEventClientNotifications;
- (void)_removeIMHandleToIDToHandlesMap:(id)arg1;
- (void)addHandleToCNIDMap:(id)arg1 CNContact:(id)arg2;
- (id)allIMHandles;
- (id)businessNameForUID:(id)arg1 updateHandler:(id /* block */)arg2;
- (void)clearCNIDToHandlesMap;
- (void)clearSiblingCacheForIMHandle:(id)arg1;
- (id)getIDsForAllIMHandles;
- (id)getIDsForFinalBatch;
- (id)getIDsForInitialBatch;
- (id)getIMHandlesForID:(id)arg1;
- (id)handlesForCNIdentifier:(id)arg1;
- (id)init;
- (void)processContactChangeHistoryEventWithHandleIDs:(id)arg1 andCNContact:(id)arg2;
- (void)registerIMHandle:(id)arg1;
- (void)removeHandleFromCNIDMap:(id)arg1 withCNID:(id)arg2;
- (id)siblingsForIMHandle:(id)arg1;
- (void)unregisterIMHandle:(id)arg1;

@end
