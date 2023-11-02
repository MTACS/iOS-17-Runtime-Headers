
@interface HMDSecureRemoteStream : HMFMessageTransport <HMFLogging, HMFObject> {
    bool  _authenticated;
    HMDDevice * _currentDevice;
    bool  _idle;
    NSDate * _lastActivity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNumber * _maximumRemoteStreams;
    bool  _open;
    HMDUser * _peer;
    HMDDevice * _peerDevice;
    HMFPairingIdentity * _peerIdentity;
    long long  _qualityOfService;
    NSObject<OS_dispatch_queue> * _queue;
    HMDSecureRemoteStreamInternal * _remoteSession;
    long long  _role;
    NSUUID * _sessionID;
    bool  _supportsSharedIdentities;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (getter=isAuthenticated, readonly) bool authenticated;
@property (nonatomic, readonly) HMDDevice *currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isIdle, readonly) bool idle;
@property (readonly, copy) NSDate *lastActivity;
@property (readonly, copy) NSNumber *maximumRemoteStreams;
@property (getter=isOpen, readonly) bool open;
@property (nonatomic, retain) HMDUser *peer;
@property (retain) HMDDevice *peerDevice;
@property (nonatomic, retain) HMFPairingIdentity *peerIdentity;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property long long qualityOfService;
@property (nonatomic, retain) HMDSecureRemoteStreamInternal *remoteSession;
@property (readonly) long long role;
@property (nonatomic, readonly, copy) NSUUID *sessionID;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsSharedIdentities;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__handleAccountRemovedFromRegistry:(id)arg1;
- (void)__handleDeviceRemovedFromAccount:(id)arg1;
- (void)__handleRemovedIdentity:(id)arg1;
- (void)_closeWithError:(id)arg1;
- (void)_configureWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)closedWithError:(id)arg1;
- (id)currentDevice;
- (void)dealloc;
- (void)handleCompletedMessage:(id)arg1 options:(id)arg2 responsePayload:(id)arg3 error:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)handleSecureMessage:(id)arg1 fromDevice:(id)arg2 fromTransport:(id)arg3;
- (id)initWithCurrentDevice:(id)arg1 peerDevice:(id)arg2 clientMode:(bool)arg3 sessionID:(id)arg4 accountRegistry:(id)arg5;
- (bool)isAuthenticated;
- (bool)isIdle;
- (bool)isOpen;
- (id)lastActivity;
- (id)logIdentifier;
- (id)maximumRemoteStreams;
- (id)peer;
- (id)peerDevice;
- (id)peerIdentity;
- (id)propertyDescription;
- (long long)qualityOfService;
- (id)remoteSession;
- (long long)role;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)sessionID;
- (void)setAuthenticated:(bool)arg1;
- (void)setIdle:(bool)arg1;
- (void)setMaximumRemoteStreams:(id)arg1;
- (void)setOpen:(bool)arg1;
- (void)setPeer:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setPeerIdentity:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRemoteSession:(id)arg1;
- (void)setSupportsSharedIdentities:(bool)arg1;
- (id)shortDescription;
- (void)startAndInvokeOnQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stop;
- (bool)supportsSharedIdentities;

@end
