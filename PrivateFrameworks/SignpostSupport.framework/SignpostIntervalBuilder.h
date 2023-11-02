
@interface SignpostIntervalBuilder : NSObject {
    bool  _buildSkyLightAnimationCompositeIntervalTimelines;
    SignpostCAInstrumentationProcessor * _caInstrumentationProcessor;
    NSMapTable * _outstandingAnimationState;
    unsigned long long  _previousMCT;
    NSMutableDictionary * _processwideDictionary;
    bool  _skyLightCompositeIntervalIsInFlight;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSMutableDictionary * _systemwideDictionary;
    NSMutableDictionary * _threadwideDictionary;
    unsigned long long  _totalSkyLightCompositeIntervalCount;
}

@property (nonatomic) bool buildSkyLightAnimationCompositeIntervalTimelines;
@property (nonatomic, readonly) SignpostCAInstrumentationProcessor *caInstrumentationProcessor;
@property (nonatomic, readonly) bool hasOutstandingAnimations;
@property (nonatomic, retain) NSMapTable *outstandingAnimationState;
@property (nonatomic) unsigned long long previousMCT;
@property (nonatomic, readonly) NSMutableDictionary *processwideDictionary;
@property (nonatomic) bool skyLightCompositeIntervalIsInFlight;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, readonly) NSMutableDictionary *systemwideDictionary;
@property (nonatomic, readonly) NSMutableDictionary *threadwideDictionary;
@property (nonatomic) unsigned long long totalSkyLightCompositeIntervalCount;

+ (bool)_filterPassesRequiredSCForFramerate:(id)arg1 includeMetal:(bool)arg2;
+ (id)_framerateCalculationAllowlist:(bool)arg1;
+ (id)_metalCalculationAllowlist;

- (void).cxx_destruct;
- (id)_animationWithBegin:(id)arg1 endEvent:(id)arg2 firstFrameGraceTimeController:(id)arg3;
- (void)_cleanupStateForBeginEvent:(id)arg1;
- (bool)_handleCommonSpecialIntervals:(id)arg1;
- (bool)_handleMacOsSpecialIntervals:(id)arg1;
- (void)_initializeMapsIfNecessary;
- (id)_matchingEventForEvent:(id)arg1 removeIfFound:(bool)arg2;
- (void)_processSkyLightCompositeInterval:(id)arg1;
- (void)_startTrackingAnimationWithBeginEvent:(id)arg1;
- (bool)_trackBegin:(id)arg1;
- (bool)buildSkyLightAnimationCompositeIntervalTimelines;
- (id)caInstrumentationProcessor;
- (id)doneProcessing;
- (void)dropAccumulatedState;
- (bool)hasOutstandingAnimations;
- (id)init;
- (bool)isMetadataSubsystem:(id)arg1 category:(id)arg2;
- (bool)isSkyLightCompositeLoopSubsystem:(id)arg1 category:(id)arg2;
- (id)matchingEventForEvent:(id)arg1 removeIfFound:(bool)arg2;
- (id)outstandingAnimationState;
- (unsigned long long)previousMCT;
- (bool)processBeginEvent:(id)arg1;
- (void)processEmittedEvent:(id)arg1;
- (id)processEndEvent:(id)arg1 firstFrameGraceTimeController:(id)arg2 isAnimation:(bool*)arg3;
- (id)processwideDictionary;
- (void)setBuildSkyLightAnimationCompositeIntervalTimelines:(bool)arg1;
- (void)setOutstandingAnimationState:(id)arg1;
- (void)setPreviousMCT:(unsigned long long)arg1;
- (void)setSkyLightCompositeIntervalIsInFlight:(bool)arg1;
- (void)setTotalSkyLightCompositeIntervalCount:(unsigned long long)arg1;
- (bool)signpostIsAnimationMetadata:(id)arg1;
- (bool)signpostIsSkyLightCompositeLoop:(id)arg1;
- (bool)skyLightCompositeIntervalIsInFlight;
- (id)syncQueue;
- (id)systemwideDictionary;
- (id)threadwideDictionary;
- (bool)timestampIndicatesDeviceReboot:(unsigned long long)arg1;
- (unsigned long long)totalSkyLightCompositeIntervalCount;

@end
