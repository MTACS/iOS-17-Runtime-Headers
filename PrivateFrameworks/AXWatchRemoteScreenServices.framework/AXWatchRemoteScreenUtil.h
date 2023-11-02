
@interface AXWatchRemoteScreenUtil : NSObject {
    void caErrorEvent;
    void caErrorKey;
    void caInactiveEvent;
    void caInactiveKey;
    void caSessionIntervalEvent;
    void caSessionIntervalKey;
}

@property (nonatomic, readonly) NSString *caErrorEvent;
@property (nonatomic, readonly) NSString *caErrorKey;
@property (nonatomic, readonly) NSString *caInactiveEvent;
@property (nonatomic, readonly) NSString *caInactiveKey;
@property (nonatomic, readonly) NSString *caSessionIntervalEvent;
@property (nonatomic, readonly) NSString *caSessionIntervalKey;

+ (id)AXWatchRemoteScreenFeatureDomain;
+ (id)AXWatchRemoteScreenFeatureKey;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)caErrorEvent;
- (id)caErrorKey;
- (id)caInactiveEvent;
- (id)caInactiveKey;
- (id)caSessionIntervalEvent;
- (id)caSessionIntervalKey;
- (id)currentPairedGizmo;
- (id)init;
- (bool)isPairedGizmoHasStingSupport;
- (bool)isPairedGizmoSupported;
- (bool)isPairedGizmoSupportedWithDeviceID:(id)arg1;
- (bool)isTwiceFeatureOn;
- (id)localizedStingStringWithKey:(id)arg1;
- (id)localizedStringWithKey:(id)arg1;
- (void)logInactiveSession;
- (void)logSessionErrorWithErrorName:(id)arg1;
- (void)logSessionIntervalBeforeDate:(id)arg1 afterDate:(id)arg2;
- (id)pairedGizmoName;

@end
