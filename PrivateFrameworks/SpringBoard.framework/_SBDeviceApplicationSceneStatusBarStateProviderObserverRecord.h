
@interface _SBDeviceApplicationSceneStatusBarStateProviderObserverRecord : NSObject {
    struct SBDeviceApplicationSceneStatusBarStateObserverFlags { 
        unsigned int wantsDidChangeStatusBarStyleTo : 1; 
        unsigned int wantsDidChangeStatusBarPartStylesTo : 1; 
        unsigned int wantsDidChangeStatusBarAlphaTo : 1; 
        unsigned int wantsDidChangeStatusBarHiddenTo_withAnimation : 1; 
        unsigned int wantsDidChangeStatusBarOrientationTo : 1; 
        unsigned int wantsDidInvalidateStatusBarDescriptionForSceneWithIdentifier : 1; 
        unsigned int wantsDidChangeBackgroundActivitiesToSuppressTo : 1; 
        unsigned int wantsDidChangeStatusBarAvoidanceFrameTo : 1; 
        unsigned int wantsDidChangeSceneInterfaceOrientationTo : 1; 
    }  _flags;
    <SBDeviceApplicationSceneStatusBarStateObserver> * _observer;
}

@property (nonatomic, readonly) struct SBDeviceApplicationSceneStatusBarStateObserverFlags { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; } flags;
@property (nonatomic, readonly) <SBDeviceApplicationSceneStatusBarStateObserver> *observer;

- (void).cxx_destruct;
- (struct SBDeviceApplicationSceneStatusBarStateObserverFlags { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; })flags;
- (id)initWithObserver:(id)arg1 andFlags:(struct SBDeviceApplicationSceneStatusBarStateObserverFlags { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; })arg2;
- (id)observer;

@end
