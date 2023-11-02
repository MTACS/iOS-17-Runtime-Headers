
@interface QSSSetAlternateRecognitionSausage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SetAlternateRecognitionSausage { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *positional_tok_phrase_alt;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SetAlternateRecognitionSausage> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetAlternateRecognitionSausage { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetAlternateRecognitionSausage { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)positional_tok_phrase_alt;

@end
