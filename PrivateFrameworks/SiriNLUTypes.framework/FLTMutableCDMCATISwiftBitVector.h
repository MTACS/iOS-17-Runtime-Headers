
@interface FLTMutableCDMCATISwiftBitVector : FLTCDMCATISwiftBitVector

@property (nonatomic) unsigned long long bit_shift;
@property (nonatomic) unsigned long long bits_per_block;
@property (nonatomic, copy) NSData *data;
@property (nonatomic) unsigned long long number_of_bits;
@property (nonatomic) unsigned long long number_of_bytes;

- (unsigned long long)bit_shift;
- (unsigned long long)bits_per_block;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)data:(id /* block */)arg1;
- (id)init;
- (unsigned long long)number_of_bits;
- (unsigned long long)number_of_bytes;
- (void)setBit_shift:(unsigned long long)arg1;
- (void)setBits_per_block:(unsigned long long)arg1;
- (void)setData:(id)arg1;
- (void)setNumber_of_bits:(unsigned long long)arg1;
- (void)setNumber_of_bytes:(unsigned long long)arg1;

@end
