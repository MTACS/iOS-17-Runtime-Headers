
@interface FTTextToSpeechSpeechFeatureRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechSpeechFeatureRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *lexicon;
@property (nonatomic, readonly) FTTextToSpeechSpeechFeatureModelIdentifier *model_id;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) bool support_homograph;
@property (nonatomic, readonly) FTTextToSpeechSpeechFeatureInputText *text;
@property (nonatomic, readonly) FTTextToSpeechSpeechFeatureInputWave *wave_data;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)lexicon;
- (unsigned long long)lexicon_count;
- (void)lexicon_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)lexicon_objectAtIndex:(unsigned long long)arg1;
- (id)model_id;
- (id)session_id;
- (id)speech_id;
- (bool)support_homograph;
- (id)text;
- (id)wave_data;

@end
