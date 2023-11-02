
@interface SiriTTSNeuralUtils : NSObject

+ (bool)compileANEModel:(id)arg1 error:(id*)arg2;
+ (bool)hasAMX;
+ (bool)hasANE;
+ (bool)isANEModelCompiled:(id)arg1;
+ (bool)isANEOnly;
+ (bool)isH12Platform;
+ (bool)isNeuralPlatform;
+ (bool)isNeuralVoiceReady:(id)arg1;
+ (bool)shouldUseNeuralVoice:(id)arg1;

@end
