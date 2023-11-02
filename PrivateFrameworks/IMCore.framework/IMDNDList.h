
@interface IMDNDList : NSObject {
    NPSManager * _syncManager;
}

@property (nonatomic, retain) NPSManager *syncManager;

+ (id)sharedList;

- (void).cxx_destruct;
- (void)_handleChatGroupIDDidChangeNotification:(id)arg1;
- (void)_handleDNDListChanged;
- (void)_synchronizeDNDList:(id)arg1 syncToPairedDevice:(bool)arg2;
- (void)_updateGroupID:(id)arg1 toGroupID:(id)arg2 forChat:(id)arg3;
- (id)currentList;
- (void)dealloc;
- (id)dndIdentifiersForChat:(id)arg1;
- (id)groupHashForChat:(id)arg1;
- (id)groupHashForHandleIDs:(id)arg1;
- (id)init;
- (bool)isMutedChat:(id)arg1;
- (bool)isMutedChatIdentifier:(id)arg1 handleIDs:(id)arg2 style:(unsigned char)arg3 isSMS:(bool)arg4;
- (void)muteChat:(id)arg1 untilDate:(id)arg2;
- (void)muteChat:(id)arg1 untilDate:(id)arg2 syncToPairedDevice:(bool)arg3;
- (void)muteChat:(id)arg1 usingIdentifier:(id)arg2 untilDate:(id)arg3 syncToPairedDevice:(bool)arg4;
- (void)setSyncManager:(id)arg1;
- (id)syncManager;
- (void)syncToPairedDeviceIncludingVersion:(bool)arg1;
- (void)unmuteChat:(id)arg1 usingIdentifier:(id)arg2 syncToPairedDevice:(bool)arg3;
- (id)unmuteDateForChat:(id)arg1;
- (id)unmuteDateForIdentifier:(id)arg1;

@end
