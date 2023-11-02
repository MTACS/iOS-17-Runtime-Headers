
@interface BWCoreAnalyticsReporter : NSObject {
    NSObject<OS_dispatch_queue> * _coreAnalyticsDispatchQueue;
}

+ (int)clientApplicationIDType:(id)arg1;
+ (id)geometricDistortionCorrectionSourceToShortString:(int)arg1;
+ (void)initialize;
+ (id)shallowDepthOfFieldEffectStatusToString:(int)arg1;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)sendEvent:(id)arg1;

@end
