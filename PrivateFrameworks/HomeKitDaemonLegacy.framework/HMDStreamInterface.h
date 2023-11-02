
@interface HMDStreamInterface : HMFObject <HMFLogging> {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    int  _localRTPSocket;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    <HMDCameraRemoteStreamProtocol> * _sessionHandler;
    HMDCameraStreamSessionID * _sessionID;
    unsigned long long  _state;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int localRTPSocket;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) <HMDCameraRemoteStreamProtocol> *sessionHandler;
@property (nonatomic, readonly) HMDCameraStreamSessionID *sessionID;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegateQueue;
- (id)extractNetworkConfig:(int)arg1 peerNameExtractor:(int (*)arg2;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegateQueue:(id)arg3 sessionHandler:(id)arg4;
- (bool)loadMiscFields:(id)arg1;
- (int)localRTPSocket;
- (id)logIdentifier;
- (int)openSocketWithNetworkConfig:(id)arg1;
- (id)propertyQueue;
- (id)sessionHandler;
- (id)sessionID;
- (void)setLocalRTPSocket:(int)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setStreamInterfaceState:(unsigned long long)arg1;
- (unsigned long long)state;
- (id)workQueue;

@end
