
@interface GKReachability : NSObject {
    bool  localWiFiRef;
    struct __SCNetworkReachability { } * reachabilityRef;
}

+ (bool)_gkIsOnline;
+ (id)_gkReachabilityForInternetConnection;
+ (id)_gkReachabilityWithAddress:(const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1;

- (int)_gkCurrentReachabilityStatus;
- (bool)_gkStartNotifier;
- (void)_gkStopNotifier;
- (void)dealloc;
- (int)localWiFiStatusForFlags:(unsigned int)arg1;
- (int)networkStatusForFlags:(unsigned int)arg1;

@end
