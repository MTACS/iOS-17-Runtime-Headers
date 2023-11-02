
@interface QSSCancelRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct CancelRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::CancelRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CancelRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CancelRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)reason;
- (id)session_id;
- (id)speech_id;

@end
