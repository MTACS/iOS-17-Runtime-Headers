
@interface FTRecognitionToken : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct RecognitionToken { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) bool add_space_after;
@property (nonatomic, readonly) int confidence;
@property (nonatomic, readonly) int end_milli_seconds;
@property (nonatomic, readonly) NSString *ipa_phone_seq;
@property (nonatomic, readonly) NSString *phone_seq;
@property (nonatomic, readonly) int silence_start_milli_seconds;
@property (nonatomic, readonly) int start_milli_seconds;
@property (nonatomic, readonly) NSString *token_text;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::RecognitionToken> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (bool)add_space_after;
- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)end_milli_seconds;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionToken { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionToken { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)ipa_phone_seq;
- (id)phone_seq;
- (int)silence_start_milli_seconds;
- (int)start_milli_seconds;
- (id)token_text;

@end
