
@interface QSSRecognitionPhraseTokensAlternatives : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct RecognitionPhraseTokensAlternatives { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) bool has_unsuggested_alternatives;
@property (nonatomic, readonly) NSArray *tok_phrases;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::RecognitionPhraseTokensAlternatives> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (bool)has_unsuggested_alternatives;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionPhraseTokensAlternatives { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionPhraseTokensAlternatives { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)tok_phrases;

@end
