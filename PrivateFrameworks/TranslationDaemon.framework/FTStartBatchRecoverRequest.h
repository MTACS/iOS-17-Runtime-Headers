
@interface FTStartBatchRecoverRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct StartBatchRecoverRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *apg_ids;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::StartBatchRecoverRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)apg_ids;
- (unsigned long long)apg_ids_count;
- (void)apg_ids_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)apg_ids_objectAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartBatchRecoverRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartBatchRecoverRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)language;
- (id)session_id;
- (id)speech_id;

@end
