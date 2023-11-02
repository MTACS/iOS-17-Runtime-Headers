
@interface PCInterfaceUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol> {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    CUTWeakReference * _delegateReference;
    void * _dynamicStore;
    NSObject<OS_nw_path_evaluator> * _evaluator;
    long long  _interfaceIdentifier;
    bool  _isPathSatisfied;
    NSObject<OS_nw_interface> * _lastDelegateInterface;
    NSObject<OS_nw_interface> * _lastInterface;
    int  _linkQuality;
    struct __CFString { } * _lqKey;
    NSMutableArray * _offTransitions;
    NSObject<OS_nw_parameters> * _pathParameters;
    NSRecursiveLock * _recursiveLock;
    NSObject<OS_dispatch_queue> * _scQueue;
    unsigned long long  _thresholdOffTransitionCount;
    bool  _trackUsability;
    double  _trackedTimeInterval;
}

@property (nonatomic, readonly) int currentRAT;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PCInterfaceUsabilityMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long interface5GMode;
@property (nonatomic, readonly) long long interfaceIdentifier;
@property (nonatomic, readonly) bool isBadLinkQuality;
@property (nonatomic, readonly) bool isInterfaceHistoricallyUsable;
@property (nonatomic, readonly) bool isInterfaceUsable;
@property (nonatomic, readonly) bool isInternetReachable;
@property (nonatomic, readonly) bool isLTEWithCDRX;
@property (nonatomic, readonly) bool isNetworkingPowerExpensiveToUse;
@property (nonatomic, readonly) bool isPoorLinkQuality;
@property (nonatomic, readonly) bool isRadioHot;
@property (nonatomic, readonly) int linkQuality;
@property (nonatomic, readonly, retain) NSString *linkQualityString;
@property (nonatomic, readonly) NSString *networkCode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct __CFString { }*wwanInterfaceName;

+ (bool)isBadLinkQuality:(int)arg1;
+ (bool)isPoorLinkQuality:(int)arg1;
+ (id)stringForLinkQuality:(int)arg1;

- (void).cxx_destruct;
- (void)_callDelegateWithBlock:(id /* block */)arg1;
- (bool)_createLinkQualityMonitor:(bool)arg1;
- (void)_createPathEvaluator;
- (void)_dynamicStoreCallback:(id)arg1;
- (void)_dynamicStoreCallbackForKeys:(id)arg1;
- (void)_flushStaleTransitions;
- (bool)_isInterfaceHistoricallyUsable;
- (bool)_isInterfaceUsable;
- (void)_pathUpdate:(id)arg1;
- (void)_processLinkQualityUpdateWithChangedKey:(id)arg1 updatedLinkQuality:(int)arg2;
- (void)_unscheduleLinkQualityMonitor;
- (void)_unschedulePathEvaluator;
- (void)_updateOffTransitionsForLinkQualityChange;
- (void)_updatePathParameters;
- (id)currentInterfaceName;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithInterfaceIdentifier:(long long)arg1 delegateQueue:(id)arg2;
- (long long)interfaceIdentifier;
- (bool)isBadLinkQuality;
- (bool)isInterfaceHistoricallyUsable;
- (bool)isInterfaceUsable;
- (bool)isInternetReachable;
- (bool)isNetworkingPowerExpensiveToUse;
- (bool)isPoorLinkQuality;
- (bool)isRadioHot;
- (int)linkQuality;
- (id)linkQualityString;
- (void)setDelegate:(id)arg1;
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;
- (void)setTrackUsability:(bool)arg1;
- (void)setTrackedTimeInterval:(double)arg1;

@end
