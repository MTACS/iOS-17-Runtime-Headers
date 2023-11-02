
@interface FTCategoryData : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct CategoryData { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *category_data;
@property (nonatomic, readonly) NSString *category_name;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::CategoryData> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)category_data;
- (unsigned long long)category_data_count;
- (void)category_data_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)category_data_objectAtIndex:(unsigned long long)arg1;
- (id)category_name;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CategoryData { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CategoryData { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
