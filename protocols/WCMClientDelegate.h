
@protocol WCMClientDelegate

@required

- (void)wcmGetCallConfig:(unsigned int*)arg1 targetBitrate:(unsigned int*)arg2;
- (void)wcmSetCallConfig:(unsigned int)arg1 interferenceLevel:(unsigned int)arg2;

@end
