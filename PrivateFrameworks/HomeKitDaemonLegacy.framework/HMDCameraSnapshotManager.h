
@interface HMDCameraSnapshotManager : HMFObject <HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMDCameraSnapshotRemoteRelaySenderDelegate, HMDCameraSnapshotRemoteRelayStreamDelegate, HMDCameraSnapshotRemoteStreamReceiverDelegate, HMDCameraSnapshotRemoteStreamSenderDelegate, HMDCameraStreamSnapshotHandlerDelegate, HMDHomeMessageReceiver, HMFLogging, HMFTimerDelegate> {
    HMDHAPAccessory * _accessory;
    HMDSnapshotLocalSession * _currentLocalSession;
    NSMutableDictionary * _currentRemoteSessions;
    <HMDCameraSnapshotManagerDataSource> * _dataSource;
    NSString * _imageCacheDirectory;
    NSString * _logIdentifier;
    HMDCameraSnapshotMonitorEvents * _monitorServicesManager;
    HMFMessageDispatcher * _msgDispatcher;
    HMFNetMonitor * _networkMonitor;
    NSMutableArray * _pendingRemoteSnapshotRequestDuringStreamSetup;
    NSMutableArray * _pendingSnapshotRequestDuringStreamSetup;
    HMDCameraResidentMessageHandler * _residentMessageHandler;
    HMDSnapshotCacheRequestHandler * _snapshotCacheRequestHandler;
    HMDSnapshotRequestHandler * _snapshotRequestHandler;
    HMDSnapshotSlotManager * _snapshotSlotManager;
    HMDCameraStreamSnapshotHandler * _streamSnapshotHandler;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *encodedMostRecentSnapshot;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (void)cleanStaleSnapshotDirectoriesUsingCurrentAccessories:(id)arg1;
+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleCreateSnapshotFromBulletinContextMessage:(id)arg1;
- (void)_handleFillSnapshotSlotMessage:(id)arg1;
- (void)_handleReleaseSnapshotMessage:(id)arg1;
- (void)_handleRemoteSnapshotReceivedMessage:(id)arg1;
- (void)_handleTakeRemoteSnapshotFailureMessage:(id)arg1;
- (void)_handleTakeRemoteSnapshotMessage:(id)arg1;
- (void)_handleTakeSnapshotMessage:(id)arg1;
- (void)dealloc;
- (id)encodedMostRecentSnapshot;
- (void)handleAccessoryUnconfigured:(id)arg1;
- (void)handleCameraSettingsDidChangeNotification:(id)arg1;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 uniqueIdentifier:(id)arg4 msgDispatcher:(id)arg5 networkMonitor:(id)arg6;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 uniqueIdentifier:(id)arg4 msgDispatcher:(id)arg5 networkMonitor:(id)arg6 logIdentifier:(id)arg7 imageCacheDirectory:(id)arg8 residentMessageHandler:(id)arg9 snapshotSlotManager:(id)arg10 dataSource:(id)arg11;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageReceiverChildren;
- (id)messageTargetUUID;
- (void)registerForMessages;
- (void)releaseSnapshotWithSlotIdentifier:(id)arg1;
- (void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)snapshotRelayReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)snapshotRelayReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotRelaySender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotRelaySender:(id)arg1 didSaveSnapshotFile:(id)arg2 sessionID:(id)arg3;
- (void)snapshotRelaySender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotRelayStream:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotRelayStream:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotStreamReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)snapshotStreamReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotStreamSender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotStreamSender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;
- (void)streamSnapshotHandler:(id)arg1 didChangeStreamSetupInProgress:(bool)arg2;
- (void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2;
- (void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2;
- (void)takeSnapshot:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)uniqueIdentifier;
- (id)workQueue;

@end
