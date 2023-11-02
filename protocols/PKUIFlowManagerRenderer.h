
@protocol PKUIFlowManagerRenderer

@required

- (<PKUIFlowManagerRenderer> *)createChildRenderer;
- (void)dismissWithViewController:(UIViewController *)arg1 animated:(bool)arg2;
- (<PKUIFlowManagerRendererDelegate> *)flowDelegate;
- (NSArray *)navViewControllers;
- (void)presentWithViewController:(UIViewController *)arg1 animated:(bool)arg2;
- (void)pushWithViewController:(UIViewController *)arg1 animated:(bool)arg2;
- (UIViewController *)rootViewController;
- (void)setFlowDelegate:(id <PKUIFlowManagerRendererDelegate>)arg1;
- (void)setViewControllers:(NSArray *)arg1 animated:(bool)arg2;

@end
