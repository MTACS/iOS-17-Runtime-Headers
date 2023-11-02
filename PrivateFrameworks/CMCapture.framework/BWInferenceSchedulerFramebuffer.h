
@interface BWInferenceSchedulerFramebuffer : NSObject {
    BWInferenceSchedulerGraph * _graph;
    BWInferenceSchedulerJobList * _jobs;
    _Atomic int  failedJobStatus;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  framebufferLock;
}

@property (nonatomic, readonly) BWInferenceSchedulerGraph *graph;
@property (nonatomic, readonly) BWInferenceSchedulerJobList *jobs;

- (void)dealloc;
- (id)graph;
- (id)initWithGraph:(id)arg1 jobList:(id)arg2;
- (id)jobs;
- (void)resetJobStatesWithPreventionBlock:(id /* block */)arg1;

@end
