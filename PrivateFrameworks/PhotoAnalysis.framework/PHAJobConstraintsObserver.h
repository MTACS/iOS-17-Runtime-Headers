
@interface PHAJobConstraintsObserver : NSObject {
    PHAJobConstraints * _currentConstraints;
    <PHAJobConstraintsObserverDelegate> * _delegate;
    bool  _shutdownRequested;
}

@property (nonatomic, retain) PHAJobConstraints *currentConstraints;
@property (nonatomic) <PHAJobConstraintsObserverDelegate> *delegate;
@property bool shutdownRequested;

- (void).cxx_destruct;
- (id)acceptConstraints:(id)arg1 mask:(id)arg2 completion:(id /* block */)arg3;
- (id)currentConstraints;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithInitialConstraints:(id)arg1 delegate:(id)arg2;
- (void)setCurrentConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShutdownRequested;
- (void)setShutdownRequested:(bool)arg1;
- (bool)shutdownRequested;

@end
