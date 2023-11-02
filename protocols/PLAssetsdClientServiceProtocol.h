
@protocol PLAssetsdClientServiceProtocol <NSObject>

@required

- (void)downloadStatusForIdentifier:(NSString *)arg1 progress:(double)arg2 completed:(bool)arg3 data:(NSData *)arg4 error:(NSError *)arg5;
- (void)libraryBecameUnavailable:(NSURL *)arg1 reason:(NSError *)arg2;

@end
