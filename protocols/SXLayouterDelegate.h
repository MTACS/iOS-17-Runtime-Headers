
@protocol SXLayouterDelegate <NSObject>

@required

- (void)layouter:(id <SXLayouter>)arg1 didFinishLayoutForComponentBlueprint:(SXComponentBlueprint *)arg2 layoutBlueprint:(SXLayoutBlueprint *)arg3 shouldContinueLayout:(bool*)arg4;

@end
