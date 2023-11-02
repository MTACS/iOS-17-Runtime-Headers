
@interface QSSErrorBlamerRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct ErrorBlamerRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *audio_packets;
@property (nonatomic, readonly) NSArray *contextual_text;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) NSString *left_context;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) NSString *ref_transcript;
@property (nonatomic, readonly) NSString *right_context;
@property (nonatomic, readonly) QSSStartSpeechRequest *start_speech_request;
@property (nonatomic, readonly) QSSUserAcousticProfile *user_acoustic_profile;
@property (nonatomic, readonly) QSSUserLanguageProfile *user_language_profile;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::ErrorBlamerRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)audio_packets;
- (id)contextual_text;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ErrorBlamerRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ErrorBlamerRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (double)latitude;
- (id)left_context;
- (double)longitude;
- (id)ref_transcript;
- (id)right_context;
- (id)start_speech_request;
- (id)user_acoustic_profile;
- (id)user_language_profile;

@end
