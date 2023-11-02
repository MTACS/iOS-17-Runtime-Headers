
@interface FTMultiUserFinalSpeechRecognitionResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct MultiUserFinalSpeechRecognitionResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *final_speech_recognition_response;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::MultiUserFinalSpeechRecognitionResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)final_speech_recognition_response;
- (unsigned long long)final_speech_recognition_response_count;
- (void)final_speech_recognition_response_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)final_speech_recognition_response_objectAtIndex:(unsigned long long)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultiUserFinalSpeechRecognitionResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultiUserFinalSpeechRecognitionResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
