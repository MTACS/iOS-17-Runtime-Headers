
@interface FLTSSUCategory : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SSUCategory { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *groups;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (struct Offset<SSUCategory> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)groups;
- (unsigned long long)groups_count;
- (void)groups_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)groups_objectAtIndex:(unsigned long long)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SSUCategory { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SSUCategory { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (long long)type;

@end
