
@protocol CLHidEventManagerDelegate <NSObject>

@optional

- (void)eventUpdateForDevice:(HIDServiceClient *)arg1 event:(HIDEvent *)arg2;

@end
