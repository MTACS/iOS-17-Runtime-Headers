
@protocol HMDRemoteEventAccessControlProvider

@required

- (bool)remoteEventAllowedForTopic:(NSString *)arg1 deviceType:(unsigned long long)arg2 userType:(unsigned long long)arg3;

@end
