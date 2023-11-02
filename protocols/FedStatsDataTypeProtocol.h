
@protocol FedStatsDataTypeProtocol <NSObject>

@required

+ (<FedStatsDataTypeProtocol> *)createFromDict:(NSDictionary *)arg1 possibleError:(id*)arg2;

- (unsigned long long)classCount;
- (long long)dataType;
- (id)decodeFromIndex:(NSNumber *)arg1 possibleError:(id*)arg2;
- (id)decodeFromOneHotVector:(NSData *)arg1 possibleError:(id*)arg2;
- (NSNumber *)encodeToIndex:(id)arg1 possibleError:(id*)arg2;
- (NSData *)encodeToOneHotVector:(id)arg1 possibleError:(id*)arg2;
- (id)sampleForIndex:(unsigned long long)arg1;

@end
