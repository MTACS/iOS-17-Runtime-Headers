
@protocol FACircleRemoteUIDelegateDelegate <NSObject>

@required

- (void)circleRemoteUIDelegate:(FACircleRemoteUIDelegate *)arg1 completedWithResponse:(FACircleStateResponse *)arg2;
- (void)circleRemoteUIDelegateDidPresent:(FACircleRemoteUIDelegate *)arg1;

@end
