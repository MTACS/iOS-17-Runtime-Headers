
@interface _BSProtobufTranslator_BSAuditToken : NSObject <BSProtobufSerializable> {
    NSString * _bundleID;
    NSData * _tokenData;
}

@property (retain) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) NSData *tokenData;

+ (id)protobufSchema;

- (void).cxx_destruct;
- (id)bundleID;
- (id)didFinishProtobufDecodingWithError:(out id*)arg1;
- (id)initProtobufTranslatorForObject:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setTokenData:(id)arg1;
- (id)tokenData;

@end
