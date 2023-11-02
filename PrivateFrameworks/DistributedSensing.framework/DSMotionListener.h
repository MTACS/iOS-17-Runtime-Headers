
@interface DSMotionListener : NSObject <DSListenerClientProtocol> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <DSMotionListenerDelegate> * _delegate;
    bool  _isSubscribed;
    bool  _isTestMode;
    DSClientMotionDataOptions * _motionDataOptions;
    DSMotionStateListenerProxy * _sharedListener;
}

@property (readonly) NSArray *activeProviders;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSMotionListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isSubscribed;
@property (nonatomic) bool isTestMode;
@property (nonatomic, retain) DSClientMotionDataOptions *motionDataOptions;
@property (nonatomic, retain) DSMotionStateListenerProxy *sharedListener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeProviders;
- (id)clientQueue;
- (id)delegate;
- (void)failedToStartListenerWithError:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (bool)isSubscribed;
- (bool)isTestMode;
- (id)motionDataOptions;
- (void)receivedData:(id)arg1 fromProvider:(id)arg2;
- (void)requestMotionData;
- (void)setClientQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsSubscribed:(bool)arg1;
- (void)setIsTestMode:(bool)arg1;
- (void)setMotionDataOptions:(id)arg1;
- (void)setSharedListener:(id)arg1;
- (id)sharedListener;
- (void)startMotionDataListenerWithOptions:(id)arg1;
- (void)startedListener;
- (void)stopMotionDataListener;
- (void)stoppedListener;
- (void)updateProviders:(id)arg1;

@end
