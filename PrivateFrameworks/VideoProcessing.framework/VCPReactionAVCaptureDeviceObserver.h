
@interface VCPReactionAVCaptureDeviceObserver : NSObject {
    int (* _callback;
    unsigned long long  _callerID;
    NSMutableArray * _captureDevices;
    <NSObject> * _deviceConnectedObserver;
    <NSObject> * _deviceDisconnectedObserver;
    bool  _hasReactions;
    void * _listener;
}

- (void).cxx_destruct;
- (void)addDevice:(id)arg1;
- (void)dealloc;
- (id)initWithCallerID:(unsigned long long)arg1 listener:(void*)arg2 callback:(int (*)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeDevice:(id)arg1;
- (void)setupReactionObserverForDevice:(id)arg1 observe:(bool)arg2;

@end
