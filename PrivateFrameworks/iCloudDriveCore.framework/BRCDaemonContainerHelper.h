
@interface BRCDaemonContainerHelper : NSObject <BRContainerHelper> {
    int  _TCCAccessChangedNotificationToken;
    NSSet * _disabledBundleIDs;
    NSSet * _knownBundleIDs;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedHelper;

- (void).cxx_destruct;
- (void)_computeTCCEnabledDisabledBundleIdentifiers;
- (id)_init;
- (unsigned short)br_capabilityToMoveFromLocalItem:(id)arg1 toNewParent:(id)arg2 session:(id)arg3 error:(id*)arg4;
- (unsigned short)br_capabilityToMoveFromLookup:(id)arg1 toNewParent:(id)arg2 session:(id)arg3 error:(id*)arg4;
- (unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id*)arg3;
- (bool)canFetchAllContainersByID;
- (bool)cloudSyncTCCDisabledForContainerMeta:(id)arg1;
- (void)dealloc;
- (id)fetchAllContainersByIDWithError:(id*)arg1;
- (id)fetchContainerForMangledID:(id)arg1 personaID:(id)arg2;
- (id)itemIDForURL:(id)arg1 error:(id*)arg2;

@end
