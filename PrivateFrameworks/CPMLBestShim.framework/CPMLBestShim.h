
@interface CPMLBestShim : NSObject

+ (id)bestShim;
+ (id)bestShimWithDBPath:(id)arg1 withModelPath:(id)arg2 withPListPath:(id)arg3;

- (void)feedback:(id)arg1 withItemsVisited:(id)arg2;
- (id)rankItems:(id)arg1 withMetaInfo:(id)arg2 withNumOfRankItem:(unsigned long long)arg3;

@end
