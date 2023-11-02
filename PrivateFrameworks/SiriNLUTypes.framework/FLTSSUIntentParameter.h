
@interface FLTSSUIntentParameter : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SSUIntentParameter { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *example_value;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (struct Offset<SSUIntentParameter> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)example_value;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SSUIntentParameter { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SSUIntentParameter { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)name;

@end
