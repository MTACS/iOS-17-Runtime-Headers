
@protocol PKUIFlowManagerRendererDelegate

@required

- (void)rendererDidDisappearWithRenderer:(id <PKUIFlowManagerRenderer>)arg1;
- (void)rendererDidRunOutOfContentWithRenderer:(id <PKUIFlowManagerRenderer>)arg1;

@end
