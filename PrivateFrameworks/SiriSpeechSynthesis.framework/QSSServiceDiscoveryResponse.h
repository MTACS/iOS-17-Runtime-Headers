
@interface QSSServiceDiscoveryResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct ServiceDiscoveryResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) int error_code;
@property (nonatomic, readonly) NSString *error_str;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSArray *zk_node;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::ServiceDiscoveryResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)error_code;
- (id)error_str;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ServiceDiscoveryResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ServiceDiscoveryResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)session_id;
- (id)zk_node;

@end
