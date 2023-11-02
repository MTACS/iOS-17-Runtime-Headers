
@interface FedStatsInvalidDataType : NSObject <FedStatsDataTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createFromDict:(id)arg1 possibleError:(id*)arg2;

- (unsigned long long)classCount;
- (long long)dataType;
- (id)decodeFromIndex:(id)arg1 possibleError:(id*)arg2;
- (id)decodeFromOneHotVector:(id)arg1 possibleError:(id*)arg2;
- (id)encodeToIndex:(id)arg1 possibleError:(id*)arg2;
- (id)encodeToOneHotVector:(id)arg1 possibleError:(id*)arg2;
- (id)init;
- (id)sampleForIndex:(unsigned long long)arg1;

@end
