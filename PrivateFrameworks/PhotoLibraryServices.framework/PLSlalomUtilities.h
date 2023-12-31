
@interface PLSlalomUtilities : NSObject

+ (double)durationForBaseDuration:(double)arg1 videoAdjustments:(id)arg2;
+ (double)durationForManagedAsset:(id)arg1 applyVideoAdjustments:(bool)arg2;
+ (id)synchronouslyFetchVideoAdjustmentsFromManagedAsset:(id)arg1;
+ (id)videoAVObjectBuilderForManagedAsset:(id)arg1 applyVideoAdjustments:(bool)arg2;

@end
