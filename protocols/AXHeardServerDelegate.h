
@protocol AXHeardServerDelegate <NSObject>

@optional

- (void)hearingServerDidDie:(HCServer *)arg1;
- (void)hearingServerIsReady;

@end
