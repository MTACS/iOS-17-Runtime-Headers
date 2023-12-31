
@interface WLKBasicContentRequestOperation : WLKUTSNetworkRequestOperation {
    NSArray * _contentIDs;
    WLKBasicContentRequestResponse * _response;
}

@property (nonatomic, readonly) WLKBasicContentMetadata *basicContentMetadata;
@property (nonatomic, readonly, copy) NSArray *contentIDs;
@property (nonatomic, readonly) WLKBasicContentRequestResponse *response;

- (void).cxx_destruct;
- (id)basicContentMetadata;
- (id)contentIDs;
- (id)initWithContentID:(id)arg1 caller:(id)arg2;
- (id)initWithContentIDs:(id)arg1 caller:(id)arg2;
- (void)processResponse;
- (id)response;

@end
