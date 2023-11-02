
@interface HMDCameraSnapshotIDSRelayReceiver : HMDCameraSnapshotIDSRelay <HMFLogging, IDSServiceDelegate, IDSSessionDelegate> {
    HMFActivity * _activity;
    <HMDCameraSnapshotIDSRelayReceiverDelegate> * _delegate;
    unsigned long long  _expectedByteCount;
    NSMutableData * _expectedByteCountData;
    IDSSession * _idsSession;
    NSUUID * _machOUUID;
    unsigned long long  _receivedByteCount;
    NSMutableData * _relayData;
    HMDCameraIDSSessionInviterDeviceVerifier * _sessionInviterDeviceVerifier;
    NSObject<OS_dispatch_source> * _socketSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDCameraSnapshotIDSRelayReceiverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property unsigned long long expectedByteCount;
@property (readonly) NSMutableData *expectedByteCountData;
@property (readonly) unsigned long long hash;
@property (retain) IDSSession *idsSession;
@property (readonly) NSUUID *machOUUID;
@property unsigned long long receivedByteCount;
@property (readonly) NSMutableData *relayData;
@property (readonly) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier;
@property (retain) NSObject<OS_dispatch_source> *socketSource;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_didReceiveData:(id)arg1 error:(id)arg2;
- (void)_handleDataFromSocket:(id)arg1;
- (void)_startDataReceive;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)expectedByteCount;
- (id)expectedByteCountData;
- (id)idsSession;
- (id)initWithSessionID:(id)arg1 logIdentifier:(id)arg2 machOUUID:(id)arg3 workQueue:(id)arg4 sessionInviterDeviceVerifier:(id)arg5 delegate:(id)arg6;
- (id)logIdentifier;
- (id)machOUUID;
- (unsigned long long)receivedByteCount;
- (id)relayData;
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (id)sessionInviterDeviceVerifier;
- (void)sessionStarted:(id)arg1;
- (void)setExpectedByteCount:(unsigned long long)arg1;
- (void)setIdsSession:(id)arg1;
- (void)setReceivedByteCount:(unsigned long long)arg1;
- (void)setSocketSource:(id)arg1;
- (id)socketSource;

@end
