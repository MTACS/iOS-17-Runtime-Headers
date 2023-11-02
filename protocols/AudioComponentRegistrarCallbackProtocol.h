
@protocol AudioComponentRegistrarCallbackProtocol

@required

- (void)registrationsChanged:(NSData *)arg1 includesExtensions:(bool)arg2 fsHash:(NSData *)arg3;

@end
