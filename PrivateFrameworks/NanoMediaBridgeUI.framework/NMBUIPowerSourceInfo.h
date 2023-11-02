
@interface NMBUIPowerSourceInfo : NSObject {
    NMBUINotificationObserver * _accessoryNotificationObserver;
    <NMBUIPowerSourceInfoDelegate> * _delegate;
    NSNumber * _lastNotifiedExternalPowerSourceConnected;
    NMBUINotificationObserver * _powerSourceNotificationObserver;
}

@property (nonatomic) <NMBUIPowerSourceInfoDelegate> *delegate;
@property (getter=hasExternalPowerSourceConnected, nonatomic, readonly) bool externalPowerSourceConnected;

- (void).cxx_destruct;
- (void)_handlePowerSourceNotification;
- (bool)_hasExternalPowerSourceConnected;
- (id)delegate;
- (bool)hasExternalPowerSourceConnected;
- (void)setDelegate:(id)arg1;

@end
