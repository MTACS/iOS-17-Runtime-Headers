
@interface VSNeuralTTSUtils : NSObject

+ (void)compileANEModel:(id)arg1;
+ (bool)hasAMX;
+ (bool)hasANE;
+ (bool)hasCompactNeuralFallback:(id)arg1;
+ (bool)hasOTAANEModel:(id)arg1;
+ (bool)isANECompilationPlatform;
+ (bool)isANEModelCompiled:(id)arg1;
+ (bool)isNeuralFallbackCondition;
+ (bool)isNeuralTTSPlatform;
+ (bool)isNeuralVoiceReady:(id)arg1;
+ (bool)shouldUseNeuralVoice:(id)arg1;

@end
