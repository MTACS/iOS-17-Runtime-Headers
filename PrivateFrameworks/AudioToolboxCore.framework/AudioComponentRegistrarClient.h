
@interface AudioComponentRegistrarClient : NSObject <AudioComponentRegistrarCallbackProtocol>

- (void)registrationsChanged:(id)arg1 includesExtensions:(bool)arg2 fsHash:(id)arg3;

@end
