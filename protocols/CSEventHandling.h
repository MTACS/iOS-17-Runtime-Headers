
@protocol CSEventHandling <NSObject>

@required

- (void)conformsToCSEventHandling;
- (bool)handleEvent:(CSEvent *)arg1;
- (bool)wouldHandleButtonEvent:(CSEvent *)arg1;

@end
