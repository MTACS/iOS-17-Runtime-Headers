
@interface WRWorkflowProvider : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    int  _notifyToken;
    WRSignpost * _startSignpost;
}

@property (readonly) WRSignpost *startSignpost;

+ (id)providerForAllWorkflowsWithQueue:(id)arg1 callback:(id /* block */)arg2;
+ (id)providerForWorkflowWithName:(id)arg1 queue:(id)arg2 callback:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleTaskingChanged:(bool)arg1;
- (id)initWithQueue:(id)arg1;
- (id)startSignpost;

@end
