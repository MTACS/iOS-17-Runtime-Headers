
@protocol SXLayoutPipelineDelegate <NSObject>

@optional

- (void)layoutPipeline:(id <SXLayoutPipeline>)arg1 finishedTask:(SXLayoutTask *)arg2 withResult:(id <SXLayoutResult>)arg3;

@end
