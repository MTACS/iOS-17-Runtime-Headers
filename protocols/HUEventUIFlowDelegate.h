
@protocol HUEventUIFlowDelegate <NSObject>

@required

- (void)eventFlow:(HUEventUIFlow *)arg1 didFinishWithEventBuilderItem:(HFEventBuilderItem *)arg2;
- (void)eventFlowDidCancel:(HUEventUIFlow *)arg1;

@end
