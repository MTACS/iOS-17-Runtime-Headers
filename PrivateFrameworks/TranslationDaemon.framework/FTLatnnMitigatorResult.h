
@interface FTLatnnMitigatorResult : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct LatnnMitigatorResult { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) float calibration_offset;
@property (nonatomic, readonly) float calibration_scale;
@property (nonatomic, readonly) bool processed;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) double threshold;
@property (nonatomic, readonly) NSString *version;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::LatnnMitigatorResult> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (float)calibration_offset;
- (float)calibration_scale;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LatnnMitigatorResult { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LatnnMitigatorResult { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (bool)processed;
- (double)score;
- (double)threshold;
- (id)version;

@end
