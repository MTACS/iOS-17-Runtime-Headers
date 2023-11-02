
@interface WebCoreAVCaptureDeviceManagerObserver : NSObject {
    void * m_callback;
}

- (void)deviceConnectedDidChange:(id)arg1;
- (void)disconnect;
- (id)initWithCallback:(void*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
