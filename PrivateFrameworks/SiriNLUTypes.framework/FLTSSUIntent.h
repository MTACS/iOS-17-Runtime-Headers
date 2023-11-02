
@interface FLTSSUIntent : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SSUIntent { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *examples;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *parameters;

- (void).cxx_destruct;
- (struct Offset<SSUIntent> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)examples;
- (unsigned long long)examples_count;
- (void)examples_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)examples_objectAtIndex:(unsigned long long)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SSUIntent { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SSUIntent { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)name;
- (id)parameters;
- (unsigned long long)parameters_count;
- (void)parameters_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)parameters_objectAtIndex:(unsigned long long)arg1;

@end
