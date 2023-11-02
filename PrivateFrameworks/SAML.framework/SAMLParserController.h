
@interface SAMLParserController : NSObject {
    NSData * _schemaData;
}

@property (nonatomic, retain) NSData *schemaData;

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)dataFromString:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)newAttributeQuery:(id)arg1 error:(id*)arg2;
- (id)newAuthNRequest:(id)arg1 error:(id*)arg2;
- (id)newAuthZQuery:(id)arg1 channelId:(id)arg2 error:(id*)arg3;
- (id)newLogoutRequest:(id*)arg1;
- (id)parseCachedResponse:(id)arg1 error:(id*)arg2;
- (id)parseResponse:(id)arg1 error:(id*)arg2;
- (id)schema;
- (id)schemaData;
- (void)setSchemaData:(id)arg1;

@end
