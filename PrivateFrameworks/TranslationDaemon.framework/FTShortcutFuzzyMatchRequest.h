
@interface FTShortcutFuzzyMatchRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct ShortcutFuzzyMatchRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) NSString *device_type;
@property (nonatomic, readonly) NSString *interaction_id;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSArray *shortcuts;
@property (nonatomic, readonly) FTShortcutFuzzyMatchRequest_StringTokenPair *utterance;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::ShortcutFuzzyMatchRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)device_type;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ShortcutFuzzyMatchRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ShortcutFuzzyMatchRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)interaction_id;
- (id)locale;
- (id)request_id;
- (id)session_id;
- (id)shortcuts;
- (unsigned long long)shortcuts_count;
- (void)shortcuts_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)shortcuts_objectAtIndex:(unsigned long long)arg1;
- (id)utterance;

@end
