
@interface HKWristDetectionSettingDataSource : HKObserverBridge {
    HKWristDetectionSettingManager * _wristDetectionSettingManager;
}

@property (nonatomic, readonly) HKWristDetectionSettingManager *wristDetectionSettingManager;

- (void).cxx_destruct;
- (id)initWithWristDetectionSettingManager:(id)arg1;
- (id)makeAndRegisterBridgedObserverForKey:(id)arg1 handle:(id)arg2;
- (void)unregisterBridgedObserver:(id)arg1 forKey:(id)arg2;
- (id)wristDetectionSettingManager;

@end
