
@interface FAUpdateFamilyInviteStatusRequest : FAFamilyCircleRequest {
    NSDictionary * _additionalRequestParameters;
    NSString * _inviteCode;
    long long  _inviteStatus;
    NSURL * _requestUrl;
}

@property (readonly, copy) NSDictionary *additionalRequestParameters;
@property (readonly, copy) NSString *inviteCode;
@property (readonly) long long inviteStatus;
@property (readonly, copy) NSURL *requestUrl;

- (void).cxx_destruct;
- (id)additionalRequestParameters;
- (id)initWithInviteCode:(id)arg1 inviteStatus:(long long)arg2 requestUrl:(id)arg3 additionalRequestParameters:(id)arg4;
- (id)inviteCode;
- (long long)inviteStatus;
- (id)requestUrl;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end
