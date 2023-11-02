
@protocol SessionManagerXPCServerCallbackProtocol

@required

- (void)IOControllerEvent:(unsigned long long)arg1 sessions:(NSData *)arg2 isDecoupledInput:(bool)arg3;
- (void)pingClient:(unsigned int)arg1;

@end
