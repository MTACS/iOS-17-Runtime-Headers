
@interface FADeclineFamilyInviteRequest : AAFamilyRequest {
    NSString * _inviteCode;
}

@property (nonatomic, copy) NSString *inviteCode;

- (void).cxx_destruct;
- (id)inviteCode;
- (bool)isUserInitiated;
- (void)setInviteCode:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end
