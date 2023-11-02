
@interface CBSliderCommitTelemetry : CBModule <CBAODProtocol, CBContainerModuleProtocol> {
    unsigned long long  _bufferEntriesFilled;
    unsigned long long  _bufferIndex;
    NSObject<OS_os_log> * _bufferLogHandle;
    long long  _delayedAPCEDelay;
    NSObject<OS_dispatch_source> * _delayedAPCETimer;
    CBDisplayContaineriOS * _displayContainer;
    struct array<CBSliderCommitInfo, 100UL> { 
        struct CBSliderCommitInfo { 
            long long timestamp; 
            long long localTimestamp; 
            int trustedLux; 
            float frontLux; 
            float rearLux; 
            bool rearLuxInUse; 
            float nits; 
            float slider; 
            float apce; 
            float delayedAPCE; 
            int delayedAPCEStatus; 
            bool autobrightnessEnabled; 
            bool ecoModeEnabled; 
            float ecoModeFactor; 
            struct CBAABParams { 
                float e0a; 
                float e0b; 
                float e1; 
                float e2; 
                float l0a; 
                float l0b; 
                float l1; 
                float l2; 
                float thirdSlope; 
            } aabParams; 
            bool aabParamsUpdateOnly; 
            bool cpmsMitigationLimitingBrightness; 
            bool touchMitigationTriggered; 
            bool proxMitigationTriggered; 
            float auroraFactor; 
            float edrHeadroom; 
            float colorAdaptationStrength; 
            int colorAdaptationMode; 
            bool darkThemeApplied; 
            bool landscapeOrientation; 
        } __elems_[100]; 
    }  _entryBuffer;
    struct __IOMobileFramebuffer { } * _iomfb;
    struct CBAABParams { 
        float e0a; 
        float e0b; 
        float e1; 
        float e2; 
        float l0a; 
        float l0b; 
        float l1; 
        float l2; 
        float thirdSlope; 
    }  _lastAABParams;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    struct TrackedState { 
        bool darkThemeApplied; 
        bool landscapeOrientation; 
        bool autobrightnessEnabled; 
        bool ecoModeEnabled; 
    }  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sliderInfoToNSDictionary:(const struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; } x15; bool x16; bool x17; bool x18; bool x19; float x20; float x21; float x22; int x23; bool x24; bool x25; }*)arg1;

- (id).cxx_construct;
- (struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; } x15; bool x16; bool x17; bool x18; bool x19; float x20; float x21; float x22; int x23; bool x24; bool x25; }*)addOrUpdateEntryWithTimestamp:(long long)arg1 slider:(float)arg2 apce:(float)arg3 andTrackedState:(struct TrackedState { bool x1; bool x2; bool x3; bool x4; })arg4;
- (void)cancelDelayedAPCETimer;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (void)delayedAPCETimerHandler:(struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; } x15; bool x16; bool x17; bool x18; bool x19; float x20; float x21; float x22; int x23; bool x24; bool x25; }*)arg1;
- (void)fillEntry:(struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; } x15; bool x16; bool x17; bool x18; bool x19; float x20; float x21; float x22; int x23; bool x24; bool x25; }*)arg1 withTimestamp:(long long)arg2 andAABParams:(struct CBAABParams { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; }*)arg3;
- (void)fillEntry:(struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; } x15; bool x16; bool x17; bool x18; bool x19; float x20; float x21; float x22; int x23; bool x24; bool x25; }*)arg1 withTimestamp:(long long)arg2 slider:(float)arg3 apce:(float)arg4 andTrackedState:(struct TrackedState { bool x1; bool x2; bool x3; bool x4; })arg5;
- (float)getAPCE;
- (struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; } x15; bool x16; bool x17; bool x18; bool x19; float x20; float x21; float x22; int x23; bool x24; bool x25; }*)getLastFilledEntry;
- (struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; } x15; bool x16; bool x17; bool x18; bool x19; float x20; float x21; float x22; int x23; bool x24; bool x25; }*)getNextEntryAndAdvanceBufferIndex;
- (bool)getUserAABParams:(struct CBAABParams { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; }*)arg1;
- (bool)handleAODStateUpdate:(unsigned long long)arg1 transitionTime:(float)arg2 context:(id)arg3;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (id)initWithQueue:(id)arg1 andDisplayContainer:(id)arg2;
- (void)logAfterUserBrightnessCommitWithTimestamp:(long long)arg1 slider:(float)arg2 apce:(float)arg3 andTrackedState:(struct TrackedState { bool x1; bool x2; bool x3; bool x4; })arg4;
- (void)logAllFilledEntries;
- (void)reportCommit:(struct CBSliderCommitInfo { long long x1; long long x2; int x3; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; int x11; bool x12; bool x13; float x14; struct CBAABParams { float x_15_1_1; float x_15_1_2; float x_15_1_3; float x_15_1_4; float x_15_1_5; float x_15_1_6; float x_15_1_7; float x_15_1_8; float x_15_1_9; } x15; bool x16; bool x17; bool x18; bool x19; float x20; float x21; float x22; int x23; bool x24; bool x25; }*)arg1;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)start;
- (void)stop;

@end
