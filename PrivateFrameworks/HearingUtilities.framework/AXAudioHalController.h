
@interface AXAudioHalController : NSObject {
    unsigned int  _plugInID;
    NSString * _reachableHearingAidsName;
    id /* block */  _routeChangeDispatchBlock;
}

@property (nonatomic) unsigned int plugInID;
@property (nonatomic, retain) NSString *reachableHearingAidsName;
@property (nonatomic, copy) id /* block */ routeChangeDispatchBlock;

- (void).cxx_destruct;
- (void)addAudioHalListener;
- (void)clearAudioHalDevice;
- (unsigned int)getHearingPlugInID;
- (void)hearingAidConnectionDidChange:(bool)arg1;
- (void)hearingAidReachabilityDidChange;
- (id)init;
- (unsigned int)plugInID;
- (bool)processUpdateDescription:(id)arg1;
- (id)reachableHearingAidsName;
- (void)registerForPropertyUpdate;
- (id /* block */)routeChangeDispatchBlock;
- (void)setPlugInID:(unsigned int)arg1;
- (void)setReachableHearingAidsName:(id)arg1;
- (void)setRouteChangeDispatchBlock:(id /* block */)arg1;
- (void)updateHalWithReachableHearingAidsName:(id)arg1;

@end
