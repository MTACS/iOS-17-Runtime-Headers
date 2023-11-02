
@protocol HDConceptIndexer <NSObject>

@required

+ (bool)indexSamplesForProfile:(HDProfile *)arg1 limit:(unsigned long long)arg2 outIndexedSamplesCount:(long long*)arg3 error:(id*)arg4;
+ (bool)resetIndexManagerStateForProfile:(HDProfile *)arg1 withError:(id*)arg2;

@end
