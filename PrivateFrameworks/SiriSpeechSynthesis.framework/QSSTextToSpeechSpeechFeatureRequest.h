
@interface QSSTextToSpeechSpeechFeatureRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechSpeechFeatureRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) QSSTextToSpeechSpeechFeatureModelIdentifier *model_id;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) QSSTextToSpeechSpeechFeatureInputText *text;
@property (nonatomic, readonly) QSSTextToSpeechSpeechFeatureInputWave *wave_data;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)model_id;
- (id)session_id;
- (id)speech_id;
- (id)text;
- (id)wave_data;

@end
