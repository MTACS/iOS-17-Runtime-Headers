
@interface FLTCDMCATISwiftBitVector : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct CDMCATISwiftBitVector { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) unsigned long long bit_shift;
@property (nonatomic, readonly) unsigned long long bits_per_block;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long number_of_bits;
@property (nonatomic, readonly) unsigned long long number_of_bytes;

- (void).cxx_destruct;
- (struct Offset<CDMCATISwiftBitVector> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (unsigned long long)bit_shift;
- (unsigned long long)bits_per_block;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)data:(id /* block */)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CDMCATISwiftBitVector { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CDMCATISwiftBitVector { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (unsigned long long)number_of_bits;
- (unsigned long long)number_of_bytes;

@end
