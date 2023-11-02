
@interface QSSLanguageDetectionPrediction : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct LanguageDetectionPrediction { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) bool is_low_confidence;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) float threshold;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::LanguageDetectionPrediction> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetectionPrediction { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetectionPrediction { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (bool)is_low_confidence;
- (id)locale;
- (float)threshold;

@end
