
@interface AACompleteEmailVettingRequest : AAEmailVettingRequest {
    NSString * _token;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)initWithAccount:(id)arg1 token:(id)arg2;
- (id)initWithURLString:(id)arg1 account:(id)arg2 token:(id)arg3;
- (id)urlString;

@end
