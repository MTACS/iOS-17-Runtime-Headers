
@interface VUIMetricsLocalRecorder : NSObject {
    void currentSession;
    void storageManager;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithStorageManager:(id)arg1;
- (void)recordPagePerfRenderEventWithVuiDictionary:(id)arg1;

@end
