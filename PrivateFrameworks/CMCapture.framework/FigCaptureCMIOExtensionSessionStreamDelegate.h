
@interface FigCaptureCMIOExtensionSessionStreamDelegate : NSObject <CMIOExtensionSessionStreamDelegate> {
    struct OpaqueFigCaptureStream { } * _figCaptureStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)stream:(id)arg1 activeFormatIndexChanged:(unsigned long long)arg2;
- (struct opaqueCMSampleBuffer { }*)stream:(id)arg1 copySampleBuffer:(bool*)arg2 error:(id*)arg3;
- (void)stream:(id)arg1 propertiesChanged:(id)arg2;
- (void)stream:(id)arg1 receivedSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)stream:(id)arg1 scheduledOutputChanged:(id)arg2;
- (void)streamHasBeenInvalidated:(id)arg1;

@end
