
@interface HMIPreference : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _preferenceCache;
    HMFTimer * _preferenceCacheFlushTimer;
    NSMutableDictionary * _preferenceLoggedValues;
    NSMutableDictionary * _preferenceOverridesInternal;
}

@property (readonly) unsigned int analysisQOS;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isIdle;
@property (readonly) double maxAnalysisFPSForCurrentThermalLevel;
@property (nonatomic, readonly) NSMutableDictionary *preferenceCache;
@property (readonly) HMFTimer *preferenceCacheFlushTimer;
@property (nonatomic, readonly) NSMutableDictionary *preferenceLoggedValues;
@property (readonly) NSDictionary *preferenceOverrides;
@property (nonatomic, readonly) NSMutableDictionary *preferenceOverridesInternal;
@property (readonly) bool shouldEnableTorsoRecognition;
@property (readonly) bool shouldUseCPUOnlyForVisionFaceDetection;
@property (readonly) Class superclass;
@property (readonly) bool usesCPUOnly;

+ (bool)isAudioAccessory;
+ (bool)isInternalInstall;
+ (bool)isProductTypeB238;
+ (bool)isProductTypeB520;
+ (bool)isProductTypeB620;
+ (bool)isProductTypeJ105;
+ (bool)isProductTypeJ255;
+ (bool)isProductTypeJ305;
+ (bool)isProductTypeJ42;
+ (id)logCategory;
+ (bool)pretendProductTypeIsUnknown;
+ (int)productType;
+ (id)qosMap;
+ (void)setPretendProductTypeIsUnknown:(bool)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addPreferenceOverrideFromDictionary:(id)arg1;
- (unsigned int)analysisQOS;
- (bool)boolPreferenceForKey:(id)arg1 defaultValue:(bool)arg2;
- (bool)hasPreferenceForKey:(id)arg1;
- (id)init;
- (bool)isIdle;
- (void)logPreferenceForKey:(id)arg1 value:(id)arg2;
- (double)maxAnalysisFPSForCurrentPeakPowerPressureLevel;
- (double)maxAnalysisFPSForCurrentThermalLevel;
- (double)maxAnalysisFPSForSystemResourceUsageLevel:(long long)arg1;
- (unsigned long long)maxConcurrentAnalyzersForCurrentPeakPowerPressureLevel;
- (unsigned long long)maxConcurrentAnalyzersForCurrentThermalLevel;
- (unsigned long long)maxConcurrentAnalyzersForSystemResourceUsageLevel:(long long)arg1;
- (id)numberPreferenceForKey:(id)arg1;
- (id)numberPreferenceForKey:(id)arg1 defaultValue:(id)arg2;
- (id)numberPreferenceForKey:(id)arg1 defaultValue:(id)arg2 withMap:(id)arg3;
- (id)numberPreferenceForKey:(id)arg1 defaultValue:(id)arg2 withParser:(id /* block */)arg3;
- (id)preferenceCache;
- (id)preferenceCacheFlushTimer;
- (id)preferenceLoggedValues;
- (id)preferenceOverrides;
- (id)preferenceOverridesInternal;
- (void)removeAllPreferenceOverrides;
- (void)setPreferenceOverrideFromDictionary:(id)arg1;
- (bool)shouldEnableTorsoRecognition;
- (bool)shouldGenerateThumbnailForAnalysisFPS:(double)arg1;
- (bool)shouldUseCPUOnlyForVisionFaceDetection;
- (id)stringPreferenceForKey:(id)arg1 defaultValue:(id)arg2;
- (id)systemPreferenceValueForKey:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (bool)usesCPUOnly;
- (id)valuePreferenceForKey:(id)arg1 defaultValue:(id)arg2 withMap:(id)arg3;
- (id)valuePreferenceForKey:(id)arg1 defaultValue:(id)arg2 withParser:(id /* block */)arg3;

@end
