
@interface FTTTSRequestFeatureFlags : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TTSRequestFeatureFlags { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) bool cache_only;
@property (nonatomic, readonly) bool disable_prompts;
@property (nonatomic, readonly) bool fe_feature;
@property (nonatomic, readonly) bool fe_feature_only;
@property (nonatomic, readonly) long long phoneset_type;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TTSRequestFeatureFlags> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (bool)cache_only;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disable_prompts;
- (bool)fe_feature;
- (bool)fe_feature_only;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSRequestFeatureFlags { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSRequestFeatureFlags { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (long long)phoneset_type;

@end
