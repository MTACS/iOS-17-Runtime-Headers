
@protocol SYBacklinkIndicatorProtocol <NSObject>

@required

- (oneway void)hideIndicator;
- (oneway void)showIndicatorForBacklinkWithDomainIdentifiers:(NSArray *)arg1 linkIdentifiers:(NSArray *)arg2 displayID:(unsigned int)arg3 corner:(long long)arg4 action:(long long)arg5;

@end
