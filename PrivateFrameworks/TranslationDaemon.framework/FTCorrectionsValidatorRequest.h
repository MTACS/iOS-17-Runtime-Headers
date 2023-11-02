
@interface FTCorrectionsValidatorRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct CorrectionsValidatorRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *corrected_utterance;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *original_utterance;
@property (nonatomic, readonly) FTRecognitionResult *recognition_result;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::CorrectionsValidatorRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)corrected_utterance;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CorrectionsValidatorRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CorrectionsValidatorRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)language;
- (id)original_utterance;
- (id)recognition_result;
- (id)session_id;
- (id)speech_id;

@end
