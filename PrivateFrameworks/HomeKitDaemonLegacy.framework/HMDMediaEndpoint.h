
@interface HMDMediaEndpoint : HMFObject <HMFLogging> {
    HMDMediaBrowser * _browser;
    unsigned int  _connectionState;
    NSString * _localizedName;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _logID;
    NSSet * _outputDeviceIdentifiers;
    NSMutableArray * _pendingBlocks;
    void * _retainedEndpoint;
    NSString * _sessionIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSArray *advertisements;
@property HMDMediaBrowser *browser;
@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (nonatomic) unsigned int connectionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) void*externalDevice;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *logID;
@property (nonatomic, retain) NSSet *outputDeviceIdentifiers;
@property (nonatomic, retain) NSMutableArray *pendingBlocks;
@property (readonly) void*retainedEndpoint;
@property (nonatomic, readonly) NSString *sessionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_connectWithCompletionHandler:(id /* block */)arg1;
- (void)_getPlaybackStateWithCompletionHandler:(id /* block */)arg1;
- (void)_notifyPendingBlocksOfError:(id)arg1;
- (void)_setPlaybackState:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateOutputDeviceIdentifiers;
- (void)_updateOutputDevicesAndConnectWithCompletionHandler:(id /* block */)arg1;
- (id)advertisements;
- (id)browser;
- (unsigned int)connectionState;
- (void*)copyOrigin;
- (void)dealloc;
- (id)description;
- (void)disconnectFromEndpoint:(void*)arg1;
- (void)disconnectWithCompletionHandler:(id /* block */)arg1;
- (bool)doesContainAnyAccessory:(id)arg1;
- (void)evaluateIfMediaPlaybackStateChanged:(id)arg1 withCompletion:(id /* block */)arg2;
- (void*)externalDevice;
- (void)getPlaybackStateWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)initWithEndpoint:(void*)arg1;
- (bool)isConnected;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEndpoint:(void*)arg1;
- (id)localizedName;
- (id)logID;
- (id)logIdentifier;
- (id)outputDeviceIdentifiers;
- (id)pendingBlocks;
- (void)registerForNowPlayingUpdates:(bool)arg1;
- (void*)retainedEndpoint;
- (id)sessionIdentifier;
- (void)setBrowser:(id)arg1;
- (void)setConnectionState:(unsigned int)arg1;
- (void)setOutputDeviceIdentifiers:(id)arg1;
- (void)setPendingBlocks:(id)arg1;
- (void)setPlaybackState:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)setRetainedEndpoint:(void*)arg1;
- (void)updateOutputDevicesAndConnectWithCompletionHandler:(id /* block */)arg1;
- (void)updateWithEndpoint:(id)arg1;
- (id)workQueue;

@end
