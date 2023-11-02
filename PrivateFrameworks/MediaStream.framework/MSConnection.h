
@interface MSConnection : NSObject {
    NSXPCConnection * _center;
    NSMutableDictionary * _serverSideConfig;
    int  _serverSideConfigNotificationToken;
    NSObject<OS_dispatch_queue> * _serverSideConfigQueue;
}

+ (id)sharedConnection;

- (void).cxx_destruct;
- (id)_machErrorWithUnderlyingError:(id)arg1;
- (void)_waitForMessageToBeSent;
- (void)abortActivitiesForPersonID:(id)arg1;
- (void)checkForOutstandingActivities;
- (void)dealloc;
- (void)deleteAssetCollections:(id)arg1 personID:(id)arg2;
- (bool)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id*)arg3;
- (bool)enqueueAssetCollections:(id)arg1 personID:(id)arg2 outError:(id*)arg3;
- (void)forgetPersonID:(id)arg1;
- (void)handleSubscriptionPushForPersonID:(id)arg1;
- (id)init;
- (id)pause;
- (void)pollForSubscriptionUpdatesForPersonID:(id)arg1;
- (void)refreshServerSideConfigurationForPersonID:(id)arg1;
- (void)resetServerStateForPersonID:(id)arg1;
- (void)resume:(id)arg1;
- (id)serverSideConfigurationForPersonID:(id)arg1;

@end