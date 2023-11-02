
@interface FTErrorMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct ErrorMessage { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) unsigned int error_code;
@property (nonatomic, readonly) NSString *reason;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::ErrorMessage> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)error_code;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ErrorMessage { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ErrorMessage { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)reason;

@end
