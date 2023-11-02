
@interface BWInferenceSchedulerFramebufferBuilder : NSObject {
    bool  _didVendFramebuffer;
    NSMapTable * _directedEdgesByNode;
    BWInferenceSchedulerGraph * _graph;
    unsigned long long  _jobCount;
    BWInferenceSchedulerJobList * _prototypeJobList;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithInferenceRequirements:(id)arg1 dependencyProvider:(id)arg2 formatProvider:(id)arg3;
- (id)newFramebuffer;

@end
