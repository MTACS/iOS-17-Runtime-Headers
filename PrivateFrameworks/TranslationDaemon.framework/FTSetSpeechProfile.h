
@interface FTSetSpeechProfile : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SetSpeechProfile { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) FTUserAcousticProfile *user_acoustic_profile;
@property (nonatomic, readonly) FTUserLanguageProfile *user_language_profile;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SetSpeechProfile> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetSpeechProfile { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetSpeechProfile { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)language;
- (id)session_id;
- (id)speech_id;
- (id)user_acoustic_profile;
- (id)user_language_profile;

@end
