
@interface FLTCDMCATISwiftBloomFilter : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct CDMCATISwiftBloomFilter { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) FLTCDMCATISwiftBitVector *bit_vector;
@property (nonatomic, readonly) unsigned int expected_items_buffer;
@property (nonatomic, readonly) unsigned int expected_number_of_items;
@property (nonatomic, readonly) double false_positive_rate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long number_of_bits;
@property (nonatomic, readonly) unsigned long long number_of_hashes;
@property (nonatomic, readonly) unsigned int number_of_items;
@property (nonatomic, readonly) unsigned long long seed;

- (void).cxx_destruct;
- (struct Offset<CDMCATISwiftBloomFilter> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)bit_vector;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)expected_items_buffer;
- (unsigned int)expected_number_of_items;
- (double)false_positive_rate;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CDMCATISwiftBloomFilter { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CDMCATISwiftBloomFilter { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)name;
- (unsigned long long)number_of_bits;
- (unsigned long long)number_of_hashes;
- (unsigned int)number_of_items;
- (unsigned long long)seed;

@end
