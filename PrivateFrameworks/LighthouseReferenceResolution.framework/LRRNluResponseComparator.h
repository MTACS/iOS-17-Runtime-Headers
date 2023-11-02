
@interface LRRNluResponseComparator : NSObject

- (bool)compare:(id)arg1 response2:(id)arg2;
- (bool)compareParses:(id)arg1 parse2:(id)arg2;
- (bool)compareParsesWithProb:(id)arg1 parse2:(id)arg2;
- (bool)compareProbability:(double)arg1 probability2:(double)arg2;
- (bool)compareUserDialogActs:(id)arg1 uda2:(id)arg2;
- (bool)compareUsoGraphs:(id)arg1 graph2:(id)arg2;

@end
