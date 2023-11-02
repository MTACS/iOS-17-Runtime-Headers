
@protocol IRAVOutputContextControllerObserverProtocol <NSObject>

@required

- (void)context:(IRAVOutputContextController *)arg1 didUpdateOutputDevice:(IRAVOutputDeviceDO *)arg2;
- (void)context:(IRAVOutputContextController *)arg1 didUpdatePredicatedOutputDevice:(IRAVOutputDeviceDO *)arg2;

@end
