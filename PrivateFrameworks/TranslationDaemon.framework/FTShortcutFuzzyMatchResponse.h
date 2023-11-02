
@interface FTShortcutFuzzyMatchResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct ShortcutFuzzyMatchResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSArray *shortcut_score_pairs;
@property (nonatomic, readonly) NSString *utterance;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::ShortcutFuzzyMatchResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ShortcutFuzzyMatchResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ShortcutFuzzyMatchResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (int)return_code;
- (id)shortcut_score_pairs;
- (unsigned long long)shortcut_score_pairs_count;
- (void)shortcut_score_pairs_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)shortcut_score_pairs_objectAtIndex:(unsigned long long)arg1;
- (id)utterance;

@end
