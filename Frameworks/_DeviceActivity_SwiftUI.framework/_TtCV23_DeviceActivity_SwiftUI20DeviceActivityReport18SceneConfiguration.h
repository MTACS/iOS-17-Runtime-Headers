
@interface _TtCV23_DeviceActivity_SwiftUI20DeviceActivityReport18SceneConfiguration : NSObject <_DeviceActivity_SwiftUI.DeviceActivityReportExtensionXPC> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _deviceActivityData;
    void connection;
    void connectionQueue;
    void updateTask;
    void updateTaskQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)updateDeviceActivityData:(id)arg1 segmentInterval:(id)arg2 replyHandler:(id /* block */)arg3;

@end
