
@interface PVEffectResources : NSObject

+ (void)applicationWillTerminate;
+ (void)cleanupEffectsCache;
+ (void)cleanupEffectsSingletons;
+ (void)clearAllCachesAndPools;
+ (void)flushEngine;
+ (float)getCVTextureCacheMaxiumumTextureAge;
+ (bool)isInteractiveMode;
+ (int)memoryEnvironment;
+ (void)setCVTextureCacheMaximumTextureAge:(float)arg1;
+ (void)setInteractiveMode:(bool)arg1;
+ (void)setUTObserver:(id)arg1;
+ (void)shutdownEngine;
+ (void)updateMemoryEnvironment:(int)arg1;
+ (id)utObserver;

@end
