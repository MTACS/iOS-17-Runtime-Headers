
@interface QSSWordTimingInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct WordTimingInfo { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) unsigned int length;
@property (nonatomic, readonly) unsigned int offset;
@property (nonatomic, readonly) unsigned int sample_idx;
@property (nonatomic, readonly) float timestamp;
@property (nonatomic, readonly) NSString *word;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::WordTimingInfo> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct WordTimingInfo { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct WordTimingInfo { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (unsigned int)length;
- (unsigned int)offset;
- (unsigned int)sample_idx;
- (float)timestamp;
- (id)word;

@end
