
@interface HFTemperatureUnitCoordinator : NSObject {
    bool  _isCelsius;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) bool isCelsius;
@property (nonatomic, retain) NSHashTable *observers;

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (void)_temperatureUnitDidChange;
- (void)_updateIsCelsiusNotifyingObservers:(bool)arg1;
- (id)init;
- (bool)isCelsius;
- (id)observers;
- (void)registerObserver:(id)arg1;
- (void)setIsCelsius:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
