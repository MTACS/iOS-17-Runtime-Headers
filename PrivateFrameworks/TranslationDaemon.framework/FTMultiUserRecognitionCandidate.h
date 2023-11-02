
@interface FTMultiUserRecognitionCandidate : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct MultiUserRecognitionCandidate { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *recognition_candidate;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::MultiUserRecognitionCandidate> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultiUserRecognitionCandidate { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultiUserRecognitionCandidate { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)recognition_candidate;
- (unsigned long long)recognition_candidate_count;
- (void)recognition_candidate_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)recognition_candidate_objectAtIndex:(unsigned long long)arg1;

@end
