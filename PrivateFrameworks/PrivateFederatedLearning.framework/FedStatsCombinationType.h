
@interface FedStatsCombinationType : FedStatsBoundedULongType {
    unsigned long long  _classCount;
    NSDictionary * _combinationSpec;
    NSArray * _orderedKeys;
    NSDictionary * _strides;
}

@property (nonatomic, retain) NSDictionary *combinationSpec;
@property (nonatomic, retain) NSArray *orderedKeys;
@property (getter=strides, nonatomic, retain) NSDictionary *strides;

+ (id)createFromDict:(id)arg1 possibleError:(id*)arg2;
+ (id)kAvailableTypes;

- (void).cxx_destruct;
- (unsigned long long)classCount;
- (id)combinationSpec;
- (long long)dataType;
- (id)decodeFromIndex:(id)arg1 possibleError:(id*)arg2;
- (id)encodeToIndex:(id)arg1 possibleError:(id*)arg2;
- (id)initWithCombinationSpec:(id)arg1;
- (id)orderedKeys;
- (id)sampleForIndex:(unsigned long long)arg1;
- (void)setCombinationSpec:(id)arg1;
- (void)setOrderedKeys:(id)arg1;
- (void)setStrides:(id)arg1;
- (id)strides;
- (id)typesInCombination;

@end
