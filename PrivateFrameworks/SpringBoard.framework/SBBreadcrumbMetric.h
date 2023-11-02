
@interface SBBreadcrumbMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    PETGoalConversionEventTracker * _leftTracker;
    PETGoalConversionEventTracker * _rightTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;

@end
