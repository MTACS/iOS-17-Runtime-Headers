
@interface QSSCreateLanguageProfileResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct CreateLanguageProfileResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) int error_code;
@property (nonatomic, readonly) NSString *error_str;
@property (nonatomic, readonly) bool incomplete_profile;
@property (nonatomic, readonly) bool recreate_apg_prons;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) QSSUserLanguageProfile *user_language_profile;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::CreateLanguageProfileResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)error_code;
- (id)error_str;
- (id)flatbuffData;
- (bool)incomplete_profile;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CreateLanguageProfileResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CreateLanguageProfileResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (bool)recreate_apg_prons;
- (id)session_id;
- (id)speech_id;
- (id)user_language_profile;

@end
