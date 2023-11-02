
@interface SASCallRouteObserver : NSObject <TURouteControllerDelegate> {
    bool  _isCallAudioRouteAllowed;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isCallAudioRouteAllowed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateCallAudioRouteAllowedForRoute:(id)arg1;
- (id)init;
- (bool)isCallAudioRouteAllowed;
- (void)routesChangedForRouteController:(id)arg1;
- (void)setIsCallAudioRouteAllowed:(bool)arg1;
- (void)startObserving;
- (void)stopObserving;

@end
