
@interface SBBiometricMonitorPearlDataSource : NSObject <BKDevicePearlDelegate, SBBiometricMonitorDataSource, SBUIBiometricResourceObserver> {
    bool  _faceDetecting;
    bool  _matching;
    NSHashTable * _observers;
    BKDevicePearl * _pearlDevice;
    bool  _poseIsMarginal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool matchRunning;
@property (nonatomic, readonly) bool poseIsMarginal;
@property (nonatomic, readonly) bool presenceDetectRunning;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_forEachObserver:(id /* block */)arg1;
- (void)_setFaceDetecting:(bool)arg1;
- (void)_setMatching:(bool)arg1;
- (void)_setPoseIsMarginal:(bool)arg1;
- (void)_updateFaceDetecting;
- (void)_updateMatching;
- (void)addObserver:(id)arg1;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (void)dealloc;
- (void)device:(id)arg1 pearlEventOccurred:(long long)arg2;
- (void)device:(id)arg1 pearlStateChanged:(long long)arg2;
- (id)init;
- (id)initWithPearlDevice:(id)arg1;
- (bool)matchRunning;
- (bool)poseIsMarginal;
- (bool)presenceDetectRunning;
- (void)removeObserver:(id)arg1;

@end
