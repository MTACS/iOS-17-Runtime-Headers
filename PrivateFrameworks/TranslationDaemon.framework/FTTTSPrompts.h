
@interface FTTTSPrompts : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TTSPrompts { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *prompts;
@property (nonatomic, readonly) NSData *prompts_v2;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TTSPrompts> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSPrompts { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSPrompts { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)prompts;
- (unsigned long long)prompts_count;
- (void)prompts_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)prompts_objectAtIndex:(unsigned long long)arg1;
- (id)prompts_v2;
- (void)prompts_v2:(id /* block */)arg1;

@end
