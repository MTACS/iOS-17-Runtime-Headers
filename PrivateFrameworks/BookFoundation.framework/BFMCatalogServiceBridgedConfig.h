
@interface BFMCatalogServiceBridgedConfig : NSObject {
    ACAccount * _account;
    NSString * _clientIdentifier;
}

@property (readonly) ACAccount *account;
@property (readonly) NSString *clientIdentifier;

- (void).cxx_destruct;
- (id)account;
- (id)clientIdentifier;
- (id)config;
- (id)initWithClientIdentifier:(id)arg1 account:(id)arg2;

@end
