
@protocol ANRemotePlaybackStatusProvider <NSObject>

@required

- (bool)isExternalPlaybackActiveForEndpointID:(NSUUID *)arg1;

@end
