
@interface CMContinuityCaptureiOSNotificationCenter : CMContinuityCaptureUserNotificationCenter {
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_scheduleNotification:(long long)arg1 data:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (void)scheduleNotification:(long long)arg1 data:(id)arg2;
- (bool)shouldDisplayNotification:(long long)arg1;

@end
