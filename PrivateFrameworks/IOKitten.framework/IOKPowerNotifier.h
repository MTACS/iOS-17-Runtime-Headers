
@interface IOKPowerNotifier : NSObject {
    unsigned int  _connection;
    <IOKPowerNotifierDelegate> * _delegate;
    struct IONotificationPort { } * _notificationPort;
    unsigned int  _notifier;
}

@property (nonatomic) <IOKPowerNotifierDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handlePowerNotificationWithMessageType:(unsigned int)arg1 andArgument:(long long)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithDispatchQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)systemHasPoweredOn;
- (void)systemWillNotSleep;
- (void)systemWillPowerOn;
- (void)systemWillSleep;

@end
