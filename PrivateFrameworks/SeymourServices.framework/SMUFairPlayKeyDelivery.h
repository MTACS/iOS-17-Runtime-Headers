
@interface SMUFairPlayKeyDelivery : NSObject <SMUFairPlayKeyDelivering>

- (id)remoteServerPlaybackContextForCertificate:(id)arg1 error:(id*)arg2;
- (id)serverPlaybackContextForPlaybackContext:(id)arg1 remoteContextIdentifier:(unsigned int)arg2 error:(id*)arg3;

@end
