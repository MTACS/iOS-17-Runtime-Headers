
@interface IMNetworkObserver : NSObject {
    NSString * _dataStatusIndicator;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned int  _networkReachabilityFlags;
    long long  _networkType;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSString * _operatorName;
    struct __SCNetworkReachability { } * _reachability;
    struct __CTServerConnection { } * _telephonyServer;
}

@property (readonly) NSString *connectionTypeHeader;
@property (readonly) unsigned int networkReachabilityFlags;
@property long long networkType;

+ (id)_networkObserverLogConfig;
+ (bool)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned int)arg1;
+ (id)sharedInstance;

- (void)_applicationForegroundNotification:(id)arg1;
- (void)_copyConnectionDataStatus:(id /* block */)arg1;
- (unsigned int)_currentNetworkReachabilityFlags;
- (id)_dataStatusIndicator;
- (void)_handleTelephonyNotificationWithName:(struct __CFString { }*)arg1 userInfo:(struct __CFDictionary { }*)arg2;
- (long long)_networkTypeForReachabilityFlags:(unsigned int)arg1;
- (long long)_networkTypeFromDataIndicator:(id)arg1;
- (void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned int)arg1 toValue:(unsigned int)arg2;
- (void)_postTypeChangedNotificationFromValue:(long long)arg1 toValue:(long long)arg2;
- (void)_reloadDataStatusIndicator;
- (void)_reloadNetworkType;
- (void)_reloadNetworkTypeWithReachabilityFlags:(unsigned int)arg1;
- (long long)_setNetworkType:(long long)arg1;
- (id)connectionTypeHeader;
- (id)dataStatusIndicator;
- (void)dealloc;
- (id)init;
- (unsigned int)networkReachabilityFlags;
- (long long)networkType;
- (bool)networkTypeIsCellularType:(long long)arg1;
- (id)operatorName;
- (void)reloadNetworkType;
- (void)setNetworkType:(long long)arg1;
- (id)stringForNetworkType:(long long)arg1;

@end
