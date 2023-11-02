
@interface CRXUNetworkReachability : NSObject {
    NSObject<OS_os_log> * _log;
    CRXUWeakObserverList * _observers;
    struct __SCNetworkReachability { } * _reachabilityRef;
    CRXUDispatchQueue * _serialQueue;
    struct sockaddr_in { 
        unsigned char sin_len; 
        unsigned char sin_family; 
        unsigned short sin_port; 
        struct in_addr { 
            unsigned int s_addr; 
        } sin_addr; 
        BOOL sin_zero[8]; 
    }  _socketAddress;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addNetworkObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isConnected;
- (void)noteReachabilityChange;
- (void)registerNetworkReachabilityCallback;
- (void)removeNetworkObserver:(id)arg1;

@end
