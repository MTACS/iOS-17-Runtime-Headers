
@interface QSSAcousticFeature : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct AcousticFeature { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *acoustic_feature_per_frame;
@property (nonatomic, readonly) float frame_duration;

- (void).cxx_destruct;
- (id)acoustic_feature_per_frame;
- (struct Offset<siri::speech::schema_fb::AcousticFeature> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (float)frame_duration;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AcousticFeature { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AcousticFeature { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
