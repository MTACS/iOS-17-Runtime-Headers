
@interface HMDCameraSettingProactiveReader : HMFObject <HMFLogging> {
    HMDAccessory * _accessory;
    <HMDCameraSettingProactiveReaderDelegate> * _delegate;
    NSString * _logIdentifier;
    HMFMessage * _pendingMessage;
    NSString * _sessionID;
    NSSet * _streamControlMessageHandlers;
    HMCameraStreamPreferences * _streamPreferences;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraSettingProactiveReaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *logIdentifier;
@property (retain) HMFMessage *pendingMessage;
@property (readonly) NSString *sessionID;
@property (readonly) NSSet *streamControlMessageHandlers;
@property (readonly) HMCameraStreamPreferences *streamPreferences;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_streamingStatusForResponse:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)_availableStreamControlMessageHandlersForReadResponses:(id)arg1;
- (void)_callDidCompleteReadDelegateCallback;
- (void)_handleStreamStatusMultireadResponse:(id)arg1;
- (id)_inUseStreamControlMessageHandlersForReadResponses:(id)arg1;
- (id)accessory;
- (id)delegate;
- (void)handleMessage:(id)arg1;
- (bool)hasPendingNegotiateMessageForSessionWithIdentifier:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 sessionID:(id)arg2 accessory:(id)arg3 message:(id)arg4 streamControlMessageHandlers:(id)arg5 streamPreferences:(id)arg6 logIdentifier:(id)arg7;
- (id)logIdentifier;
- (id)pendingMessage;
- (void)readSetting;
- (id)sessionID;
- (void)setAccessory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPendingMessage:(id)arg1;
- (id)streamControlMessageHandlers;
- (id)streamPreferences;
- (id)workQueue;

@end
