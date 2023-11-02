
@interface SNAudioMultiArrayUtils : NSObject

+ (id)batchCountFromShape:(id)arg1;
+ (id)channelCountFromShape:(id)arg1;
+ (bool)checkDimensionCountIsSupported:(long long)arg1;
+ (id)frameCountFromShape:(id)arg1;
+ (id)indexOfBatchDimensionFromCount:(long long)arg1;
+ (id)indexOfChannelDimensionFromCount:(long long)arg1;
+ (id)indexOfFrameDimensionFromCount:(long long)arg1;
+ (id)reshapeAudioMultiArrayToBatchChannelFrameForm:(id)arg1 error:(id*)arg2;
+ (id)shapeWithFrameCount:(long long)arg1 channelCount:(long long)arg2 batchCount:(long long)arg3;
+ (bool)validateDimensionCountIsSupported:(long long)arg1 error:(id*)arg2;

- (id)init;

@end
