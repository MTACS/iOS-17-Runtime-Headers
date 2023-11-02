
@interface MOVStreamOptions : NSObject {
    bool  _debugMode;
}

@property (readonly) double bitrateMultiplier;
@property (readonly) unsigned long long bitrateOverride;
@property (readonly) bool disableFrameReordering;
@property (readonly) bool force10bitMonoByVT;
@property (readonly) bool forceColorLossless;
@property (readonly) bool forceLossless8bitMonoByVT;
@property (readonly) bool skipSourceHint;

+ (id)sharedOptions;

- (double)bitrateMultiplier;
- (unsigned long long)bitrateOverride;
- (void)checkBossMode;
- (void)checkHasValue:(id)arg1 changedForKey:(id)arg2;
- (id)currentOptions;
- (bool)disableFrameReordering;
- (bool)force10bitMonoByVT;
- (bool)forceColorLossless;
- (bool)forceLossless8bitMonoByVT;
- (id)init;
- (id)localDefaults;
- (void)registerStandardDefaults;
- (bool)skipSourceHint;
- (id)standardDefaultValues;

@end
