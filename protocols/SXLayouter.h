
@protocol SXLayouter <NSObject>

@required

- (<SXLayouterDelegate> *)delegate;
- (void)layoutBlueprint:(SXLayoutBlueprint *)arg1 columnLayout:(SXColumnLayout *)arg2 description:(SXLayoutDescription *)arg3 shouldContinue:(bool*)arg4;
- (void)setDelegate:(id <SXLayouterDelegate>)arg1;

@end
