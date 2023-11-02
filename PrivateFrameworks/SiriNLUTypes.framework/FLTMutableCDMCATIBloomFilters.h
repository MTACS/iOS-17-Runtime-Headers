
@interface FLTMutableCDMCATIBloomFilters : FLTCDMCATIBloomFilters

@property (nonatomic, copy) NSArray *array_bf;
@property (nonatomic, copy) FLTCDMCATISwiftBloomFilter *general_bf;

- (id)array_bf;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)general_bf;
- (id)init;
- (void)setArray_bf:(id)arg1;
- (void)setGeneral_bf:(id)arg1;

@end
