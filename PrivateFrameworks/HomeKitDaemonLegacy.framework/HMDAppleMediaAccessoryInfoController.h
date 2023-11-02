
@interface HMDAppleMediaAccessoryInfoController : NSObject {
    <HMDAppleMediaAccessoryInfoControllerDataSource> * _dataSource;
    <HMDAppleMediaAccessoryInfoControllerDelegate> * _delegate;
    HMFWiFiNetworkInfo * _lastWifiNetworkInfo;
    NSNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _queue;
    HMFWiFiManager * _wifiManager;
}

@property (readonly) <HMDAppleMediaAccessoryInfoControllerDataSource> *dataSource;
@property (readonly) <HMDAppleMediaAccessoryInfoControllerDelegate> *delegate;
@property (retain) HMFWiFiNetworkInfo *lastWifiNetworkInfo;
@property (retain) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain) HMFWiFiManager *wifiManager;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_notifyDelegateWifiInfoUpdated:(id)arg1;
- (void)_postUpdateSoftwareVersionIfDifferent:(id)arg1;
- (void)_postUpdateWifiNetworkInfoIfDifferent:(id)arg1;
- (void)configure;
- (id)currentWifiNetworkInfo;
- (id)dataSource;
- (id)delegate;
- (void)handleCurrentNetworkChangedNotification:(id)arg1;
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3 notificationCenter:(id)arg4 wifiManager:(id)arg5;
- (id)lastWifiNetworkInfo;
- (id)notificationCenter;
- (id)queue;
- (void)setLastWifiNetworkInfo:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setWifiManager:(id)arg1;
- (id)wifiManager;

@end
