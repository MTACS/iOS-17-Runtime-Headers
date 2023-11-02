
@interface CSReceiverConnection : CSXPCConnection {
    NSArray * _INIntentClassNames;
    NSArray * _bundleIDs;
    NSArray * _contentTypes;
    NSObject<SpotlightReceiver> * _receiver;
    int  _supportedJobs;
}

@property (nonatomic, copy) NSArray *INIntentClassNames;
@property (nonatomic, copy) NSArray *bundleIDs;
@property (nonatomic, copy) NSArray *contentTypes;
@property (nonatomic, readonly) NSObject<SpotlightReceiver> *receiver;
@property (nonatomic, readonly) int supportedJobs;

- (void).cxx_destruct;
- (id)INIntentClassNames;
- (bool)addClientConnectionIfAllowedForConnection:(id)arg1;
- (int)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (int)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (id)bundleIDs;
- (id)contentTypes;
- (int)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
- (int)deleteAllUserActivities:(id)arg1;
- (int)deleteFromBundle:(id)arg1 sinceDate:(id)arg2 domains:(id)arg3 deletes:(id)arg4;
- (int)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (int)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (int)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2;
- (int)donateRelevantActions:(id)arg1 bundleID:(id)arg2;
- (int)donateRelevantShortcuts:(id)arg1 bundleID:(id)arg2;
- (bool)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (int)handleSetup:(id)arg1;
- (int)indexFromBundle:(id)arg1 protectionClass:(id)arg2 items:(id)arg3 itemsContent:(id)arg4;
- (id)initWithReceiver:(id)arg1 forServiceName:(id)arg2;
- (bool)lostClientConnection:(id)arg1 error:(id)arg2;
- (int)purgeFromBundle:(id)arg1 identifiers:(id)arg2;
- (id)receiver;
- (void)setBundleIDs:(id)arg1;
- (void)setContentTypes:(id)arg1;
- (void)setINIntentClassNames:(id)arg1;
- (int)supportedJobs;

@end
