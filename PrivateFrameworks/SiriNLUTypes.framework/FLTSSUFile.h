
@interface FLTSSUFile : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SSUFile { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) unsigned short format_version;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) FLTSSUMetadata *metadata;

- (void).cxx_destruct;
- (struct Offset<SSUFile> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)categories;
- (unsigned long long)categories_count;
- (void)categories_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)categories_objectAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (unsigned short)format_version;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SSUFile { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SSUFile { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)locale;
- (id)metadata;

@end
