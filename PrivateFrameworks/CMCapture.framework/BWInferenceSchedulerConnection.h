
@interface BWInferenceSchedulerConnection : NSObject {
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSObject<OS_dispatch_group> * _coordinationGroup;
    BWInferenceSchedulerResourceCoordinator * _coordinator;
    BWInferenceSchedulerFramebuffer * _framebuffer;
    unsigned long long  _identifier;
    NSObject<OS_dispatch_queue> * _inferenceQueue;
    NSObject<OS_dispatch_queue> * _scalingQueue;
    NSObject<OS_dispatch_queue> * _submissionQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *coordinationGroup;
@property (nonatomic, readonly) BWInferenceSchedulerResourceCoordinator *coordinator;
@property (nonatomic, retain) BWInferenceSchedulerFramebuffer *framebuffer;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *inferenceQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *scalingQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *submissionQueue;

- (id)completionQueue;
- (id)coordinationGroup;
- (id)coordinator;
- (void)dealloc;
- (id)framebuffer;
- (unsigned long long)identifier;
- (id)inferenceQueue;
- (id)init;
- (id)initWithInferenceTargetQueue:(id)arg1 scalingTargetQueue:(id)arg2 submissionTargetQueue:(id)arg3 completionTargetQueue:(id)arg4;
- (id)scalingQueue;
- (void)setFramebuffer:(id)arg1;
- (id)submissionQueue;

@end
