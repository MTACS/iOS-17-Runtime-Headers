
@interface FTRequestStatsResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct RequestStatsResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *bool_stats;
@property (nonatomic, readonly) NSArray *double_stats;
@property (nonatomic, readonly) NSArray *int32_stats;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *request_locale;
@property (nonatomic, readonly) NSString *speech_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::RequestStatsResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)bool_stats;
- (unsigned long long)bool_stats_count;
- (void)bool_stats_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)bool_stats_objectAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)double_stats;
- (unsigned long long)double_stats_count;
- (void)double_stats_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)double_stats_objectAtIndex:(unsigned long long)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RequestStatsResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RequestStatsResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)int32_stats;
- (unsigned long long)int32_stats_count;
- (void)int32_stats_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)int32_stats_objectAtIndex:(unsigned long long)arg1;
- (id)language;
- (id)request_locale;
- (id)speech_id;

@end
