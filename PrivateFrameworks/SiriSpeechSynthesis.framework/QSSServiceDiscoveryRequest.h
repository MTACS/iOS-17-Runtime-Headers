
@interface QSSServiceDiscoveryRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct ServiceDiscoveryRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *app_id;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *zk_path;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::ServiceDiscoveryRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)app_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ServiceDiscoveryRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ServiceDiscoveryRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)session_id;
- (id)zk_path;

@end
