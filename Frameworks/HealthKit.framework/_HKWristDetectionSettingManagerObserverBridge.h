
@interface _HKWristDetectionSettingManagerObserverBridge : NSObject <HKWristDetectionSettingManagerObserver> {
    HKObserverBridgeHandle * _handle;
}

@property (nonatomic, readonly) HKObserverBridgeHandle *handle;

- (void).cxx_destruct;
- (id)handle;
- (id)initWithHandle:(id)arg1;
- (void)wristDetectionSettingManagerDidObserveWristDetectChange:(id)arg1;

@end
