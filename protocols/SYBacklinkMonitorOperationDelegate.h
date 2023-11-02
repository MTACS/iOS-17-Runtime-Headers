
@protocol SYBacklinkMonitorOperationDelegate <NSObject>

@required

- (void)backlinkMonitorOperationDidFinish:(SYBacklinkMonitorOperation *)arg1;

@optional

- (void)backlinkMonitorOperation:(SYBacklinkMonitorOperation *)arg1 shouldUpdateFilterCache:(SYBacklinkFilterCache *)arg2;

@end
