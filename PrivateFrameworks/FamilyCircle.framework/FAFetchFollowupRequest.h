
@interface FAFetchFollowupRequest : FAFamilyCircleRequest {
    NSString * _altDSID;
}

- (void).cxx_destruct;
- (id)initWithAltDSID:(id)arg1;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end
