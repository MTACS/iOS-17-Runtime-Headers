
@interface HAENotificationCenter : NSObject {
    <HAENotificationCenterUserDelegate> * _delegate;
    NSString * bundleID;
    <HAENotificationCenterDelegate> * centerDelegate;
    double  liveMonitorWindowInSec;
    double  liveThresholdInDBA;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) <HAENotificationCenterUserDelegate> *delegate;
@property (nonatomic, readonly) double liveMonitorWindowInSec;
@property (nonatomic, readonly) double liveThresholdInDBA;

+ (bool)connectedWiredDeviceIsHeadphone;
+ (bool)connectedWiredDeviceIsHeadphoneWithUUID:(id)arg1;
+ (void)startNotificationCenterServer;

- (void).cxx_destruct;
- (void)addHAENotificationEvent:(id)arg1 completion:(id /* block */)arg2;
- (id)addHAENotificationEvent:(id)arg1 error:(id*)arg2;
- (id)bundleID;
- (id)delegate;
- (id)initWithBundleIdentifier:(id)arg1;
- (double)liveMonitorWindowInSec;
- (double)liveThresholdInDBA;
- (void)setDelegate:(id)arg1;

@end
