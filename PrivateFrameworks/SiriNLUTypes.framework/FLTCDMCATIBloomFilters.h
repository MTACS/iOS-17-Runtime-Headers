
@interface FLTCDMCATIBloomFilters : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct CDMCATIBloomFilters { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *array_bf;
@property (nonatomic, readonly) FLTCDMCATISwiftBloomFilter *general_bf;

- (void).cxx_destruct;
- (struct Offset<CDMCATIBloomFilters> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)array_bf;
- (unsigned long long)array_bf_count;
- (void)array_bf_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)array_bf_objectAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)general_bf;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CDMCATIBloomFilters { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CDMCATIBloomFilters { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
