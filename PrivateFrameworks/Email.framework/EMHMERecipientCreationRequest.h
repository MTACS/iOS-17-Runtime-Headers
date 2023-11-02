
@interface EMHMERecipientCreationRequest : AARequest {
    ACAccount * _account;
    NSString * _hmeAddress;
    NSString * _recipient;
}

+ (bool)canCreateHMEReplyToAddress:(id)arg1;
+ (id)log;
+ (Class)responseClass;

- (void).cxx_destruct;
- (id)_httpBody;
- (id)initWithAccount:(id)arg1 recipient:(id)arg2 hmeAddress:(id)arg3;
- (id)urlRequest;
- (id)urlString;

@end
