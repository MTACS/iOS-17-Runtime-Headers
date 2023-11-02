
@protocol SMUFairPlayKeyDelivering

@required

- (SMUFairPlayRemoteServerPlaybackContext *)remoteServerPlaybackContextForCertificate:(NSData *)arg1 error:(id*)arg2;
- (NSData *)serverPlaybackContextForPlaybackContext:(NSData *)arg1 remoteContextIdentifier:(unsigned int)arg2 error:(id*)arg3;

@end
