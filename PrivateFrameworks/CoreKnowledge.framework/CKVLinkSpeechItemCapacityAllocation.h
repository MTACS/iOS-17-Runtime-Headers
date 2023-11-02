
@interface CKVLinkSpeechItemCapacityAllocation : NSObject {
    unsigned long long  _dynamicCapacity;
    NSDictionary * _dynamicItemCounts;
    unsigned long long  _oovCapacity;
    NSDictionary * _oovItemCounts;
}

@property (nonatomic, readonly) unsigned long long dynamicCapacity;
@property (nonatomic, readonly) NSDictionary *dynamicItemCounts;
@property (nonatomic, readonly) unsigned long long oovCapacity;
@property (nonatomic, readonly) NSDictionary *oovItemCounts;

- (void).cxx_destruct;
- (unsigned long long)dynamicCapacity;
- (id)dynamicItemCounts;
- (id)init;
- (id)initWithDynamicItemCounts:(id)arg1 oovItemCounts:(id)arg2 dynamicCapacity:(unsigned long long)arg3 oovCapacity:(unsigned long long)arg4;
- (unsigned long long)oovCapacity;
- (id)oovItemCounts;

@end
