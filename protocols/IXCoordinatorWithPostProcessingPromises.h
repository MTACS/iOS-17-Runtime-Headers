
@protocol IXCoordinatorWithPostProcessingPromises <NSObject>

@required

- (bool)getNeedsPostProcessing:(bool*)arg1 error:(id*)arg2;
- (bool)getPostProcessingShouldBegin:(bool*)arg1 error:(id*)arg2;
- (bool)setNeedsPostProcessing:(bool)arg1 error:(id*)arg2;

@end
