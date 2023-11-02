
@interface ARProcessMonitor : NSObject {
    <ARProcessMonitorStateChangeDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pidsLock;
    NSMutableDictionary * _pidsToObserve;
    RBSProcessMonitor * _processMonitor;
}

@property (nonatomic) <ARProcessMonitorStateChangeDelegate> *delegate;

+ (bool)processIsDaemon:(int)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)handleStateUpdate:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)startMonitoringImmersiveStatusForPID:(int)arg1 withServices:(id)arg2;
- (void)startMonitoringPID:(int)arg1;
- (void)stopMonitoringImmersiveStatusForPID:(int)arg1;
- (void)stopMonitoringPID:(int)arg1;
- (void)updateProcessMonitorConfig:(id)arg1 withPredicates:(id)arg2;

@end
