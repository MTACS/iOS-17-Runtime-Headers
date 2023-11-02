
@interface HMIDESResultPackager : HMFObject

+ (id)logCategory;
+ (id)packageTrainingResult:(id)arg1 privatize:(bool)arg2 maxNorm:(double)arg3 normBinCount:(unsigned long long)arg4 encryptionKey:(id)arg5 error:(id*)arg6;

@end
