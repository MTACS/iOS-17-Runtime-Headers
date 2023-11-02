
@interface FTUserDataEntity : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct UserDataEntity { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *attributes;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::UserDataEntity> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)attributes;
- (unsigned long long)attributes_count;
- (void)attributes_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)attributes_objectAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UserDataEntity { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UserDataEntity { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
