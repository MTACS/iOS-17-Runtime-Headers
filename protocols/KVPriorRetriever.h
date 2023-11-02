
@protocol KVPriorRetriever <NSObject>

@required

- (NSDictionary *)allPriorInfoWithThreshold:(unsigned int)arg1;
- (NSDictionary *)priorInfoForItemIds:(NSArray *)arg1;

@end
