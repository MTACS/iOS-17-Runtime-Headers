
@interface IMBasePlatformLookupService : IMBaseStoreService {
    NSString * _protocolVersion;
}

@property (nonatomic, retain) NSString *protocolVersion;

- (void).cxx_destruct;
- (id)baseUrl;
- (id)init;
- (void)performRequest:(id /* block */)arg1;
- (id)platformAction;
- (id)protocolVersion;
- (void)setProtocolVersion:(id)arg1;
- (id)urlRequest;

@end
