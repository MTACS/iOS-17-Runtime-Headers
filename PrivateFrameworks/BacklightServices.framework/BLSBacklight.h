
@interface BLSBacklight : NSObject <BLSBacklightChangeRequestable, BLSBacklightStateObservable> {
    <BLSBacklightProxy> * _backlightProxy;
}

@property (getter=isAlwaysOnEnabled, nonatomic, readonly) bool alwaysOnEnabled;
@property (nonatomic, readonly) long long backlightState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool deviceSupportsAlwaysOn;
@property (nonatomic, readonly) long long flipbookState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;

+ (void)setDefaultBacklightProxy:(id)arg1;
+ (id)sharedBacklight;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (long long)backlightState;
- (bool)deviceSupportsAlwaysOn;
- (long long)flipbookState;
- (id)init;
- (bool)isAlwaysOnEnabled;
- (bool)isTransitioning;
- (id)performChangeRequest:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
