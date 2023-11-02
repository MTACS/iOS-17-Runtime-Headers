
@interface CATNetworkReachability : NSObject {
    CATAddress * _address;
    <CATNetworkReachabilityDelegate> * _delegate;
    unsigned int  _flags;
    struct __SCNetworkReachability { } * mReachabilityRef;
}

@property (nonatomic, readonly) CATAddress *address;
@property (nonatomic) <CATNetworkReachabilityDelegate> *delegate;
@property (nonatomic) unsigned int flags;
@property (getter=isReachable, nonatomic, readonly) bool reachable;

+ (bool)isReachableForLocalWiFiWithFlags:(unsigned int)arg1;
+ (bool)isReachableForNetworkWithFlags:(unsigned int)arg1;
+ (id)keyPathsForValuesAffectingReachable;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(id)arg1;

- (void).cxx_destruct;
- (id)address;
- (void)configureCallback;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (void)delegateDidChange;
- (unsigned int)flags;
- (id)initWithAddress:(id)arg1;
- (bool)isReachable;
- (void)reachabilityDidChangeWithFlags:(unsigned int)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFlags:(unsigned int)arg1;

@end