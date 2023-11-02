
@interface HMDCameraResidentMessageHandler : HMFObject <HMFLogging> {
    HMDAccessory * _accessory;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _logIdentifier;
    HMDMessageDispatcher * _messageDispatcher;
    NSMutableDictionary * _queuedMessagesByDeviceIdentifier;
}

@property (readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) HMDMessageDispatcher *messageDispatcher;
@property (readonly) NSMutableDictionary *queuedMessagesByDeviceIdentifier;
@property (readonly) HMDDevice *remoteAccessDevice;
@property (getter=isRemoteAccessDeviceReachable, readonly) bool remoteAccessDeviceReachable;
@property (readonly) Class superclass;
@property (getter=isUsingCompanionForRemoteAccessDevice, readonly) bool usingCompanionForRemoteAccessDevice;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessory;
- (void)dequeueRespondedMessageForDeviceIdentifier:(id)arg1;
- (void)enqueueMessage:(id)arg1 forDeviceIdentifier:(id)arg2;
- (id)initWithAccessory:(id)arg1 logIdentifier:(id)arg2;
- (id)initWithAccessory:(id)arg1 logIdentifier:(id)arg2 messageDispatcher:(id)arg3;
- (bool)isRemoteAccessDeviceReachable;
- (bool)isUsingCompanionForRemoteAccessDevice;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)nextMessageForDeviceIdentifier:(id)arg1;
- (id)queuedMessagesByDeviceIdentifier;
- (id)remoteAccessDevice;
- (void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 device:(id)arg5 responseQueue:(id)arg6 responseHandler:(id /* block */)arg7;
- (void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 responseQueue:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)sendNextMessageForDeviceIdentifier:(id)arg1;

@end
