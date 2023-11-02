
@interface ATXAppClipSettingsUpdateSource : NSObject <ATXUpdatePredictionsSource> {
    <ATXUpdatePredictionsDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    int  _token;
}

@property (nonatomic) <ATXUpdatePredictionsDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleSiriSettingsChangedNotification;
- (id)init;
- (void)registerSiriSettingsChangedNotificationHandler;
- (void)setDelegate:(id)arg1;

@end
