
@interface FBProcessObserver : NSObject <FBApplicationProcessObserver, FBProcessObserver> {
    int  _calledDidExit;
    int  _calledDidLaunch;
    int  _calledWillExit;
    int  _calledWillLaunch;
    int  _invalidated;
    <FBProcessObserver> * _observer;
    unsigned long long  _observerAddress;
    Class  _observerClass;
    bool  _supportsApplicationDebugState;
    bool  _supportsApplicationDidExit;
    bool  _supportsApplicationDidLaunch;
    bool  _supportsApplicationWillLaunch;
    bool  _supportsDidExit;
    bool  _supportsStateDidChange;
    bool  _supportsWillExit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FBProcessObserver> *observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applicationProcessDebuggingStateDidChange:(id)arg1;
- (void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2;
- (void)applicationProcessDidLaunch:(id)arg1;
- (void)applicationProcessWillLaunch:(id)arg1;
- (unsigned long long)hash;
- (id)initWithObserver:(id)arg1;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (id)observer;
- (void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;
- (void)processDidExit:(id)arg1;
- (void)processWillExit:(id)arg1;

@end
