
@interface WebCoreAudioCaptureSourceIOSListener : NSObject {
    void * _callback;
}

- (id)initWithCallback:(void*)arg1;
- (void)invalidate;
- (void)sessionMediaServicesWereReset:(id)arg1;

@end
