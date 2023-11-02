
@interface VKCStickerEffectVideoProcessor : NSObject

+ (int)_transcodeSequenceData:(id)arg1 effect:(id)arg2 maxDimension:(unsigned long long)arg3 outputData:(id*)arg4 progressHandler:(id /* block */)arg5;
+ (void)applyEffect:(id)arg1 toImageSequence:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;

@end
