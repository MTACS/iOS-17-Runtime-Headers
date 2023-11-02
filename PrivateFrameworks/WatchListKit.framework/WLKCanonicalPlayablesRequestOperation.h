
@interface WLKCanonicalPlayablesRequestOperation : WLKUTSNetworkRequestOperation {
    NSString * _contentID;
    WLKCanonicalPlayablesResponse * _response;
}

@property (nonatomic, readonly, copy) NSString *contentID;
@property (nonatomic, readonly) WLKCanonicalPlayablesResponse *response;

- (void).cxx_destruct;
- (id)contentID;
- (id)initWithContentID:(id)arg1 caller:(id)arg2 canonicalType:(long long)arg3;
- (id)initWithContentID:(id)arg1 caller:(id)arg2 isMovie:(bool)arg3;
- (id)initWithContentID:(id)arg1 profiles:(id)arg2 caller:(id)arg3;
- (void)processResponse;
- (id)response;

@end
