
@interface ActivationMapTools : NSObject

+ (id)characterCentroidsFromActivationMap:(const void*)arg1 codeMap:(const int*)arg2 decodedSymbolIndexes:(id*)arg3;
+ (id)characterCentroidsFromActivationMap:(void*)arg1 codeMap:(const int*)arg2 potentialPatterns:(id)arg3 minWordLengthFractionForCorrelationPeak:(float)arg4 bestModelIndex:(long long*)arg5;
+ (int)colInImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 forPoint:(int)arg2 inActivationMapWithSize:(int)arg3;
+ (id)decodeStringWithCentroids:(id)arg1 activationMap:(const void*)arg2 codeMap:(const int*)arg3 model:(id)arg4;
+ (void)extractActivationSignals:(void*)arg1 fromActivationMap:(const void*)arg2 forModel:(id)arg3 codeMap:(const int*)arg4;
+ (id)fitSpacingModel:(id)arg1 toActivationMap:(const void*)arg2 codeMap:(const int*)arg3 minWordLengthFractionForCorrelationPeak:(float)arg4 cost:(float*)arg5;
+ (bool)matchLabel:(int)arg1 toModelCharacter:(unsigned short)arg2;
+ (id)textFromActivationMap:(void*)arg1 codeMap:(const int*)arg2 invert:(bool)arg3;

@end
