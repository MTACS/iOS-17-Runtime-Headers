
@interface CTStewieStateMonitor : NSObject {
    <CTStewieStateMonitorDelegate> * fDelegate;
    NSObject<OS_dispatch_queue> * fDelegateQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  fLock;
    NSObject<OS_nw_path_evaluator> * fPathEvaluator;
    bool  fStarted;
    CTStewieState * fState;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)getState;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (bool)start;
- (bool)startWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)stateFromPath:(id)arg1;

@end
