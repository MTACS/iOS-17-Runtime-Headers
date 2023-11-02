
@protocol TSXgPTPPortConnectionClient <NSObject>

@optional

- (void)interruptedConnectionForPort:(TSXgPTPPort *)arg1;
- (void)invalidatedConnectionForPort:(TSXgPTPPort *)arg1;

@end
