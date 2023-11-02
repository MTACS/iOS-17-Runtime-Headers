
@interface FLTSSUExampleEncodedVector : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SSUExampleEncodedVector { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *data;

- (void).cxx_destruct;
- (struct Offset<SSUExampleEncodedVector> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (unsigned long long)data_count;
- (void)data_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)data_objectAtIndex:(unsigned long long)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SSUExampleEncodedVector { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SSUExampleEncodedVector { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
