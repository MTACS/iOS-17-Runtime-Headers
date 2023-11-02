
@interface HMDHomeNaturalLightingContextUpdater : HMFObject <HMFLogging> {
    HMDNaturalLightingCurve * _curve;
    long long  _curveMaximumBrightness;
    long long  _curveMinimumBrightness;
    <HMDLightProfileDataSource> * _dataSource;
    bool  _demoModeEnabled;
    HMDHome * _home;
    NSString * _logIdentifier;
    NSNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (copy) HMDNaturalLightingCurve *curve;
@property long long curveMaximumBrightness;
@property long long curveMinimumBrightness;
@property (readonly) <HMDLightProfileDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDemoModeEnabled, readonly) bool demoModeEnabled;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)areEncodedBrightnessLevelTransitionPointsValid:(id)arg1;
- (long long)colorTemperatureForTransitionPoint:(id)arg1;
- (id)colorTemperatureTransitionPointsForMaximumBrightnessWithEncodeNaturalLightingCurve:(id)arg1;
- (id)colorTemperatureTransitionPointsForMinimumBrightnessWithEncodeNaturalLightingCurve:(id)arg1;
- (void)configure;
- (id)curve;
- (long long)curveMaximumBrightness;
- (long long)curveMinimumBrightness;
- (id)dataSource;
- (void)handleResidentDeviceUpdated:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1 demoModeEnabled:(bool)arg2;
- (id)initWithHome:(id)arg1 workQueue:(id)arg2 demoModeEnabled:(bool)arg3 logIdentifier:(id)arg4 notificationCenter:(id)arg5 dataSource:(id)arg6;
- (void)initalizeCurve;
- (bool)isDemoModeEnabled;
- (id)logIdentifier;
- (id)notificationCenter;
- (void)setCurve:(id)arg1;
- (void)setCurveMaximumBrightness:(long long)arg1;
- (void)setCurveMinimumBrightness:(long long)arg1;
- (long long)timeOfDayForMinimumBrightnessTransitionPoint:(id)arg1 maximumBrighnessTransitionPoint:(id)arg2;
- (void)updateNaturalLightingContext;
- (id)workQueue;

@end
