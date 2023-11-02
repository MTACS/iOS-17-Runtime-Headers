
@interface CLSReachability : NSObject {
    bool  _localWiFiRef;
    struct __SCNetworkReachability { } * _reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1;
+ (id)reachabilityWithHostName:(id)arg1;

- (long long)_localWiFiStatusForFlags:(unsigned int)arg1;
- (long long)_networkStatusForFlags:(unsigned int)arg1;
- (bool)connectionRequired;
- (long long)currentNetworkStatus;
- (void)dealloc;
- (id)initWithNetworkReachability:(struct __SCNetworkReachability { }*)arg1;
- (bool)startNotifier;
- (void)stopNotifier;

@end
