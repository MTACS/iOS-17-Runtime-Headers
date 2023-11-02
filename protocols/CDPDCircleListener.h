
@protocol CDPDCircleListener <NSObject>

@required

- (void)circleStatusChangedForAccountContext:(CDPContext *)arg1;
- (void)circleViewStatusChangedForAccountContext:(CDPContext *)arg1;

@end
