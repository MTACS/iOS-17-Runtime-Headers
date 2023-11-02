
@interface IRNearbyInteractionBridge : NSObject <IRProximityBridgeProtocol, NIInternalSessionDelegate> {
    NSNumber * _binaryRegionThreshold;
    <IRProximityBridgeDelegateProtocol> * _delegate;
    bool  _isObserver;
    NSString * _name;
    NIConfiguration * _niConfiguration;
    NISession * _niSession;
    bool  _trackRegion;
    bool  _trackUpdates;
}

@property (nonatomic, retain) NSNumber *binaryRegionThreshold;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IRProximityBridgeDelegateProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isObserver;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NIConfiguration *niConfiguration;
@property (nonatomic, retain) NISession *niSession;
@property (readonly) Class superclass;
@property (nonatomic) bool trackRegion;
@property (nonatomic) bool trackUpdates;

- (void).cxx_destruct;
- (double)_nearbyObjectDistance:(id)arg1;
- (void)_updateRegionToDelegate:(id)arg1;
- (id)binaryRegionThreshold;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 NIConfiguration:(id)arg2 observer:(bool)arg3 name:(id)arg4;
- (void)invalidate;
- (bool)isObserver;
- (id)name;
- (id)niConfiguration;
- (id)niSession;
- (void)run;
- (void)session:(id)arg1 didDiscoverNearbyObject:(id)arg2;
- (void)session:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)session:(id)arg1 didRemoveNearbyObjects:(id)arg2 withReason:(long long)arg3;
- (void)session:(id)arg1 didUpdateNearbyObjects:(id)arg2;
- (void)session:(id)arg1 object:(id)arg2 didUpdateRegion:(id)arg3 previousRegion:(id)arg4;
- (void)sessionDidStartRunning:(id)arg1;
- (void)sessionSuspensionEnded:(id)arg1;
- (void)sessionWasSuspended:(id)arg1;
- (void)setBinaryRegionThreshold:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsObserver:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNiConfiguration:(id)arg1;
- (void)setNiSession:(id)arg1;
- (void)setTrackRegion:(bool)arg1;
- (void)setTrackUpdates:(bool)arg1;
- (bool)trackRegion;
- (bool)trackUpdates;

@end
