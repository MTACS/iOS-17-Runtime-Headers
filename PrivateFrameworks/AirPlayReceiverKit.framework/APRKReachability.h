
@interface APRKReachability : NSObject {
    struct __SCNetworkReachability { } * _reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
+ (id)reachabilityWithHostName:(id)arg1;

- (bool)connectionRequired;
- (long long)currentReachabilityStatus;
- (void)dealloc;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (bool)startNotifier;
- (void)stopNotifier;

@end
