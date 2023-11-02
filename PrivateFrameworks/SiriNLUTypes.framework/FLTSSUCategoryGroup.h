
@interface FLTSSUCategoryGroup : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SSUCategoryGroup { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *negative_examples;
@property (nonatomic, readonly) NSArray *positive_intents;

- (void).cxx_destruct;
- (struct Offset<SSUCategoryGroup> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SSUCategoryGroup { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SSUCategoryGroup { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)name;
- (id)negative_examples;
- (unsigned long long)negative_examples_count;
- (void)negative_examples_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)negative_examples_objectAtIndex:(unsigned long long)arg1;
- (id)positive_intents;
- (unsigned long long)positive_intents_count;
- (void)positive_intents_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)positive_intents_objectAtIndex:(unsigned long long)arg1;

@end
