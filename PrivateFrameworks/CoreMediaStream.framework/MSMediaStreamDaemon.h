
@interface MSMediaStreamDaemon : MSDaemon {
    <MSMediaStreamDaemonDelegate> * _delegate;
    NSCountedSet * _retainedObjects;
}

@property (nonatomic) <MSMediaStreamDaemonDelegate> *delegate;

- (void).cxx_destruct;
- (id)_boundDeleterForPersonID:(id)arg1;
- (id)_boundPublisherForPersonID:(id)arg1;
- (id)_boundServerSideConfigManagerForPersonID:(id)arg1;
- (id)_boundSubscriberForPersonID:(id)arg1;
- (void)abortAllActivityForPersonID:(id)arg1;
- (void)computeHashForAsset:(id)arg1 personID:(id)arg2;
- (id)delegate;
- (void)deleteAssetCollections:(id)arg1 forPersonID:(id)arg2;
- (bool)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id*)arg3;
- (void)didExceedPublishQuotaForPersonID:(id)arg1 retryDate:(id)arg2;
- (void)didIdle;
- (void)didReceiveAuthenticationFailureForPersonID:(id)arg1;
- (void)didReceiveAuthenticationSuccessForPersonID:(id)arg1;
- (void)didReceiveGlobalResetSyncForPersonID:(id)arg1;
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)arg1;
- (void)didReceiveNewShareState:(id)arg1 oldShareState:(id)arg2 forPersonID:(id)arg3;
- (void)didReceivePushNotificationForPersonID:(id)arg1;
- (void)didReceiveServerSideConfigurationVersion:(id)arg1 forPersonID:(id)arg2;
- (void)didUnidle;
- (bool)enqueueAssetCollection:(id)arg1 personID:(id)arg2 outError:(id*)arg3;
- (void)forgetPersonID:(id)arg1;
- (bool)hasOutstandingActivity;
- (id)init;
- (bool)isInRetryState;
- (bool)mayDownloadPersonID:(id)arg1;
- (id)nextActivityDate;
- (id)ownSubscribedStreamForPersonID:(id)arg1;
- (bool)personIDHasOutstandingPublications:(id)arg1;
- (void)pollForSubscriptionUpdatesForPersonID:(id)arg1;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)arg1;
- (void)reenqueueQuarantinedActivitiesWithReason:(id)arg1;
- (void)refreshServerSideConfigurationForPersonID:(id)arg1;
- (void)resetSubscriberSyncForPersonID:(id)arg1;
- (void)retryOutstandingActivities;
- (id)serverSideConfigurationForPersonID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showInvitationFailureAlertForPersonID:(id)arg1 failures:(id)arg2;
- (void)start;
- (void)stop;
- (void)stopAllActivities;
- (id)subscribedStreamsForPersonID:(id)arg1;

@end
