
@protocol CMIOExtensionSessionStreamDelegate <NSObject>

@required

- (void)stream:(CMIOExtensionSessionStream *)arg1 activeFormatIndexChanged:(unsigned long long)arg2;
- (struct opaqueCMSampleBuffer { }*)stream:(CMIOExtensionSessionStream *)arg1 copySampleBuffer:(bool*)arg2 error:(id*)arg3;
- (void)stream:(CMIOExtensionSessionStream *)arg1 propertiesChanged:(NSDictionary *)arg2;
- (void)stream:(CMIOExtensionSessionStream *)arg1 receivedSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)stream:(CMIOExtensionSessionStream *)arg1 scheduledOutputChanged:(CMIOExtensionScheduledOutput *)arg2;
- (void)streamHasBeenInvalidated:(CMIOExtensionSessionStream *)arg1;

@end
