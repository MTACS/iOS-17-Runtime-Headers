
@interface HKMedicationsMapResult : NSObject {
    HKMedicationsNumberToNumberMap * _commonDict;
    HKMedicationsNumberToNumberMap * _commonSetSizeDict;
    NSSet * _distinctHgIds;
    long long  _ngramCount;
    HKMedicationsNumberToNumberPairListMap * _uniqueDict;
    HKMedicationsNumberToNumberMap * _uniqueSetSizeDict;
}

@property (nonatomic, retain) HKMedicationsNumberToNumberMap *commonDict;
@property (nonatomic, retain) HKMedicationsNumberToNumberMap *commonSetSizeDict;
@property (nonatomic, retain) NSSet *distinctHgIds;
@property (nonatomic) long long ngramCount;
@property (nonatomic, retain) HKMedicationsNumberToNumberPairListMap *uniqueDict;
@property (nonatomic, retain) HKMedicationsNumberToNumberMap *uniqueSetSizeDict;

- (void).cxx_destruct;
- (id)commonDict;
- (id)commonSetSizeDict;
- (id)distinctHgIds;
- (long long)ngramCount;
- (void)setCommonDict:(id)arg1;
- (void)setCommonSetSizeDict:(id)arg1;
- (void)setDistinctHgIds:(id)arg1;
- (void)setNgramCount:(long long)arg1;
- (void)setUniqueDict:(id)arg1;
- (void)setUniqueSetSizeDict:(id)arg1;
- (id)uniqueDict;
- (id)uniqueSetSizeDict;

@end
