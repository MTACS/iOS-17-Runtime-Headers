
@interface QSSRecognitionChoice : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct RecognitionChoice { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *alternative_index;
@property (nonatomic, readonly) int confidence;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::RecognitionChoice> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)alternative_index;
- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionChoice { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionChoice { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
