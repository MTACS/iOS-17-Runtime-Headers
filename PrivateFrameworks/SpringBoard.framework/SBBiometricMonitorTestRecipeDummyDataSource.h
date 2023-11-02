
@interface SBBiometricMonitorTestRecipeDummyDataSource : NSObject <SBBiometricMonitorDataSource> {
    NSMutableSet * _observers;
    bool  _poseIsMarginal;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool matchRunning;
@property (nonatomic, readonly) bool poseIsMarginal;
@property (nonatomic, readonly) bool presenceDetectRunning;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)cycleState;
- (bool)matchRunning;
- (bool)poseIsMarginal;
- (bool)presenceDetectRunning;
- (void)removeObserver:(id)arg1;

@end
