
@interface HMDHomeReprovisionHandler : HMFObject <HMDHomeMessageReceiver, HMFLogging, HMFTimerDelegate> {
    <HMDAccessoryBrowserProtocol> * _accessoryBrowser;
    HMFTimer * _disableReprovisionBrowsingTimer;
    HMDHome * _home;
    HMFMessageDispatcher * _msgDispatcher;
    NSMutableDictionary * _pendingReprovisionRequests;
    bool  _reprovisionBrowsingAllowed;
    bool  _reprovisionBrowsingPending;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleReprovisionAccessory:(id)arg1;
- (void)_handleRequestSearchForAccessoriesNeedingReprovisioning:(id)arg1;
- (void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3;
- (void)dealloc;
- (void)handleFoundAccessoryNeedingReprovisioning:(id)arg1 error:(id)arg2;
- (void)handleReprovionedAccessory:(id)arg1 identifier:(id)arg2 error:(id)arg3;
- (id)init;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)timerDidFire:(id)arg1;

@end
