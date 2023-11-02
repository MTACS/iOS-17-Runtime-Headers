
@interface FTServerEndpointFeatures : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct ServerEndpointFeatures { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) double eos_likelihood;
@property (nonatomic, readonly) int num_of_words;
@property (nonatomic, readonly) NSArray *pause_counts;
@property (nonatomic, readonly) int processed_audio_duration_ms;
@property (nonatomic, readonly) double silence_posterior;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) NSString *task_name;
@property (nonatomic, readonly) int trailing_silence_duration;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::ServerEndpointFeatures> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)eos_likelihood;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ServerEndpointFeatures { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ServerEndpointFeatures { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (int)num_of_words;
- (id)pause_counts;
- (unsigned long long)pause_counts_count;
- (void)pause_counts_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)pause_counts_objectAtIndex:(unsigned long long)arg1;
- (int)processed_audio_duration_ms;
- (double)silence_posterior;
- (id)speech_id;
- (id)task_name;
- (int)trailing_silence_duration;

@end
