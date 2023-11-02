
@interface QSSSpeechTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SpeechTranslationInfo { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *raw_nbest_choices;
@property (nonatomic, readonly) QSSRecognitionSausage *raw_sausage;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SpeechTranslationInfo> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationInfo { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationInfo { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)raw_nbest_choices;
- (id)raw_sausage;

@end
