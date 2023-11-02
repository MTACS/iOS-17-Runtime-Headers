
@protocol PXNumberAnimatorDisplayLinkTarget <NSObject>

@required

- (double)currentTime;
- (void)handleDisplayLink:(CADisplayLink *)arg1;

@end
