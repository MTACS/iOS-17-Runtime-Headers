
@interface QSSQSSVersionInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct QSSVersionInfo { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *qss_version_brane;
@property (nonatomic, readonly) NSString *qss_version_server;
@property (nonatomic, readonly) NSString *qss_version_serverkit;
@property (nonatomic, readonly) NSString *qss_version_siritts;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::QSSVersionInfo> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct QSSVersionInfo { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct QSSVersionInfo { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)qss_version_brane;
- (id)qss_version_server;
- (id)qss_version_serverkit;
- (id)qss_version_siritts;

@end
