
@interface HUNearbyLiveListenController : NSObject <HUListenerHelperDelegate> {
    <HUNearbyLiveListenDeviceImplementation> * _deviceImplementation;
    long long  _state;
    NSMutableArray * _updateBlocks;
    NSLock * _updateLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <HUNearbyLiveListenDeviceImplementation> *deviceImplementation;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *updateBlocks;
@property (nonatomic, retain) NSLock *updateLock;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_updateState:(long long)arg1 audioLevel:(float)arg2;
- (id)deviceImplementation;
- (id)init;
- (void)registerUpdateBlock:(id /* block */)arg1 withListener:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)setDeviceImplementation:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setUpdateBlocks:(id)arg1;
- (void)setUpdateLock:(id)arg1;
- (void)startLiveListen;
- (long long)state;
- (void)stopLiveListen;
- (id)updateBlocks;
- (id)updateLock;

@end
