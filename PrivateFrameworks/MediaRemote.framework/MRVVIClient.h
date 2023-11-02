
@interface MRVVIClient : NSObject {
    NSMutableDictionary * _deviceIDToCallbackMap;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)_recordingStateChangedNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setRecordingStateCallback:(id /* block */)arg1 forDeviceID:(unsigned int)arg2;

@end
