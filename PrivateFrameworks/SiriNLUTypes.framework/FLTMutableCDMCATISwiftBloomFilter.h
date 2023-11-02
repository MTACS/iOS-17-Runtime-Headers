
@interface FLTMutableCDMCATISwiftBloomFilter : FLTCDMCATISwiftBloomFilter

@property (nonatomic, copy) FLTCDMCATISwiftBitVector *bit_vector;
@property (nonatomic) unsigned int expected_items_buffer;
@property (nonatomic) unsigned int expected_number_of_items;
@property (nonatomic) double false_positive_rate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long number_of_bits;
@property (nonatomic) unsigned long long number_of_hashes;
@property (nonatomic) unsigned int number_of_items;
@property (nonatomic) unsigned long long seed;

- (id)bit_vector;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)expected_items_buffer;
- (unsigned int)expected_number_of_items;
- (double)false_positive_rate;
- (id)init;
- (id)name;
- (unsigned long long)number_of_bits;
- (unsigned long long)number_of_hashes;
- (unsigned int)number_of_items;
- (unsigned long long)seed;
- (void)setBit_vector:(id)arg1;
- (void)setExpected_items_buffer:(unsigned int)arg1;
- (void)setExpected_number_of_items:(unsigned int)arg1;
- (void)setFalse_positive_rate:(double)arg1;
- (void)setName:(id)arg1;
- (void)setNumber_of_bits:(unsigned long long)arg1;
- (void)setNumber_of_hashes:(unsigned long long)arg1;
- (void)setNumber_of_items:(unsigned int)arg1;
- (void)setSeed:(unsigned long long)arg1;

@end
