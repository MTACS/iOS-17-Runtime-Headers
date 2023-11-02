
@protocol SXComponentViewPostProcessorManager <NSObject>

@required

- (void)addProcessor:(id <SXComponentViewPostProcessor>)arg1;
- (void)processComponent:(id <SXComponent>)arg1 view:(SXComponentView *)arg2;
- (void)removeProcessor:(id <SXComponentViewPostProcessor>)arg1;

@end
