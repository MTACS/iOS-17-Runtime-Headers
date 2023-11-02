
@interface HMDCameraSnapshotIDSRelayInitiator : HMDCameraSnapshotIDSRelay <IDSSessionDelegate> {
    HMFActivity * _activity;
    NSMutableData * _data;
    <HMDCameraSnapshotIDSRelayInitiatorDelegate> * _delegate;
    HMDDevice * _device;
    IDSSession * _idsSession;
    bool  _idsSessionStarted;
    NSObject<OS_dispatch_source> * _socketSource;
}

@property (retain) NSMutableData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDCameraSnapshotIDSRelayInitiatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device;
@property (readonly) unsigned long long hash;
@property (retain) IDSSession *idsSession;
@property bool idsSessionStarted;
@property (retain) NSObject<OS_dispatch_source> *socketSource;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callFileTransferFailed:(id)arg1;
- (void)_sendData;
- (void)_startDataTransfer;
- (id)data;
- (void)dealloc;
- (id)delegate;
- (id)device;
- (id)idsSession;
- (bool)idsSessionStarted;
- (id)initWithSessionID:(id)arg1 logIdentifier:(id)arg2 workQueue:(id)arg3 device:(id)arg4 delegate:(id)arg5;
- (void)sendData:(id)arg1;
- (void)sendIDSInvitation;
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIdsSession:(id)arg1;
- (void)setIdsSessionStarted:(bool)arg1;
- (void)setSocketSource:(id)arg1;
- (id)socketSource;

@end
