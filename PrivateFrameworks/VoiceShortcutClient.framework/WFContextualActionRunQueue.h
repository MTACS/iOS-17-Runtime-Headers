
@interface WFContextualActionRunQueue : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _runnerClients;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) NSMutableArray *runnerClients;

+ (id)sharedQueue;

- (void).cxx_destruct;
- (void)enqueueRun:(id)arg1;
- (id)init;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)runFinished:(id)arg1;
- (id)runnerClients;

@end
