
@interface HMClientConnection : NSObject <HMFLogging, HMFMessageReceiver> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMFMessageDispatcher * _msgDispatcher;
    bool  _shouldWeRetrySendingSignOutMessageToHomeKitDaemon;
    NSUUID * _uuid;
    HMXPCClient * _xpcClient;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) HMFMessageDispatcher *msgDispatcher;
@property bool shouldWeRetrySendingSignOutMessageToHomeKitDaemon;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) HMXPCClient *xpcClient;

+ (bool)areAnyAccessoriesConfigured;
+ (bool)areAnyAppleTVAccessoriesConfigured;
+ (bool)areAnyHomePodMiniConfigured;
+ (bool)areAnyHomePodsConfigured;
+ (bool)areAnyLargeHomePodConfigured;
+ (bool)areAnySpeakersConfigured;
+ (bool)areAnyTelevisionAccessoriesConfigured;
+ (bool)areHomesConfigured;
+ (id)logCategory;
+ (id)sharedInstance;
+ (id)siriCurrentHome;
+ (id)siriHomeIdentifier;

- (void).cxx_destruct;
- (void)_IDMSAccountUsernameModifiedWithCompletionHandler:(id /* block */)arg1;
- (void)_primaryAccountDidChange:(id)arg1 modified:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_primaryAccountWasDeletedWithCompletionHandler:(id /* block */)arg1;
- (void)_registerToDaemon;
- (void)_reportIntentResultToHandler:(id /* block */)arg1;
- (void)_reportResultsToHandler:(id /* block */)arg1;
- (void)_reportUnconfiguredHomesFailureForSiriCommand:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_retrySendingSignOutWithCompletion:(id /* block */)arg1;
- (void)_start;
- (id)clientQueue;
- (id)init;
- (id)initWithNoValidation;
- (id)initWithXPCClient:(id)arg1 messageDispatcher:(id)arg2;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)notifyAccountStatusUpdate:(unsigned long long)arg1 accountIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)requestSiriSyncDataWithValidity:(id)arg1 completion:(id /* block */)arg2;
- (void)sendIntentRequestCommand:(id)arg1 withPayload:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendSiriCommand:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setShouldWeRetrySendingSignOutMessageToHomeKitDaemon:(bool)arg1;
- (void)setUuid:(id)arg1;
- (void)setXpcClient:(id)arg1;
- (bool)shouldRetrySendingSignOutMessageDueToError:(id)arg1;
- (bool)shouldWeRetrySendingSignOutMessageToHomeKitDaemon;
- (id)uuid;
- (id)xpcClient;

@end
