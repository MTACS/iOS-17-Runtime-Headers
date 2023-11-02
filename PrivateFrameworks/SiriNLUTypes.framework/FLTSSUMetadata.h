
@interface FLTSSUMetadata : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SSUMetadata { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *data_version;
@property (nonatomic, readonly) NSString *encoder_version;
@property (nonatomic, readonly) long long timestamp;
@property (nonatomic, readonly) NSArray *user_data;

- (void).cxx_destruct;
- (struct Offset<SSUMetadata> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data_version;
- (id)encoder_version;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SSUMetadata { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SSUMetadata { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (long long)timestamp;
- (id)user_data;
- (unsigned long long)user_data_count;
- (void)user_data_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)user_data_objectAtIndex:(unsigned long long)arg1;

@end
