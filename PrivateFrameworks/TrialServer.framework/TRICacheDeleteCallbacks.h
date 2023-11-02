
@interface TRICacheDeleteCallbacks : NSObject {
    <TRIAssetPurging> * _assetPurger;
    TRIClient * _loggingClient;
    <TRIPaths> * _paths;
}

+ (id)_assetPurger:(id)arg1 experimentDatabase:(id)arg2 rolloutDatabase:(id)arg3 taskQueue:(id)arg4 loggingClient:(id)arg5;
+ (void)registerCallbacksWithPaths:(id)arg1 experimentDatabase:(id)arg2 rolloutDatabase:(id)arg3 taskQueue:(id)arg4 loggingClient:(id)arg5;

- (void).cxx_destruct;
- (void)_logPurgedAmountTelemetry:(int)arg1 purgedAmountInBytes:(id)arg2;
- (bool)_trialVolumeIsEqualToVolume:(id)arg1;
- (void)cancel:(id)arg1;
- (id)initWithPaths:(id)arg1 assetPurger:(id)arg2 loggingClient:(id)arg3;
- (id)purge:(id)arg1 urgency:(int)arg2;
- (id)purgeable:(id)arg1 urgency:(int)arg2;

@end
