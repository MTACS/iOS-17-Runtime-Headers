
@protocol BRCReachabilityDelegate <NSObject>

@required

- (void)networkReachabilityChanged:(bool)arg1;

@optional

- (void)networkReachabilityFlagsChanged:(unsigned int)arg1;

@end
