
@protocol GEOMapServiceThrottlableTicket <NSObject>

@required

- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })dataRequestKind;
- (void)setThrottlerToken:(GEODataRequestThrottlerToken *)arg1;

@end
