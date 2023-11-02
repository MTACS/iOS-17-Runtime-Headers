
@protocol ContinuityCaptureTaskDelegate <NSObject>

@required

- (void)captureStillImage:(void *)arg1 entity:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CMContinuityCaptureStillImageRequest *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)connectionInterrupted:(NSError *)arg1 forDevice:(id <ContinuityCaptureTransportDevice>)arg2;
- (void)didCaptureStillImage:(CMContinuityCaptureStillImageRequest *)arg1 entity:(long long)arg2;
- (void)dispatchFrame:(void *)arg1 entity:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: struct opaqueCMSampleBuffer { }*, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)enqueueReactionEffect:(NSString *)arg1 entity:(long long)arg2;
- (void)handleAVCNegotiation:(long long)arg1 data:(NSData *)arg2;
- (void)handleSynchronizeAudioClockCompletion;
- (void)postEvent:(NSString *)arg1 entity:(long long)arg2 data:(NSDictionary *)arg3;
- (void)setValueForControl:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: CMContinuityCaptureControl *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startStream:(void *)arg1 option:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CMContinuityCaptureConfiguration *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopStream:(void *)arg1 option:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)synchronizeAudioClockWithSampleTime:(unsigned long long)arg1 networkTime:(unsigned long long)arg2 clockGrandMasterIdentifier:(unsigned long long)arg3;

@end
