
@protocol SXLayoutPipeline <NSObject>

@required

- (void)addProcessor:(id <SXLayoutProcessor>)arg1 type:(unsigned long long)arg2;
- (void)cancelTasks;
- (<SXLayoutPipelineDelegate> *)delegate;
- (void)layoutWithTask:(SXLayoutTask *)arg1;
- (void)removeProcessor:(id <SXLayoutProcessor>)arg1 type:(unsigned long long)arg2;
- (void)setDelegate:(id <SXLayoutPipelineDelegate>)arg1;

@end
