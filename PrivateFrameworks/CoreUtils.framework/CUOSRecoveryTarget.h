
@interface CUOSRecoveryTarget : NSObject {
    bool  _activateCalled;
    CUBLEAdvertiser * _bleAdvertiser;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _progressHandler;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (void)_activate;
- (void)_invalidate;
- (void)_invalidated;
- (void)_reportProgressType:(int)arg1;
- (void)activate;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)progressHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
