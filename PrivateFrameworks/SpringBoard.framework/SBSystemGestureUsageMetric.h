
@interface SBSystemGestureUsageMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    unsigned long long  _currentLocation;
    NSMutableDictionary * _typeToMetric;
}

@property (nonatomic) unsigned long long currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)currentLocation;
- (bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;
- (void)setCurrentLocation:(unsigned long long)arg1;

@end
