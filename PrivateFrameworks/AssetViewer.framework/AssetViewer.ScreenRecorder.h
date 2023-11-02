
@interface AssetViewer.ScreenRecorder : NSObject <UNUserNotificationCenterDelegate> {
    void $__lazy_storage_$_userNotificationCenter;
    void config;
    void device;
    void metalTextureCache;
    void movieWriter;
    void referenceTime;
    void state;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

- (void).cxx_destruct;
- (id)init;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
