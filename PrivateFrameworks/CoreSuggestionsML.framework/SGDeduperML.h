
@interface SGDeduperML : NSObject

+ (id /* block */)bucketerWithEqualityTest:(id /* block */)arg1;
+ (id /* block */)bucketerWithLabeledBuckets:(id /* block */)arg1;
+ (id /* block */)bucketerWithMapping:(id /* block */)arg1;
+ (id)dedupe:(id)arg1 bucketer:(id /* block */)arg2 resolver:(id /* block */)arg3;
+ (id /* block */)resolveByPairs:(id /* block */)arg1;
+ (id /* block */)resolveByScoreBreakTiesArbitrarily:(id /* block */)arg1;

@end
