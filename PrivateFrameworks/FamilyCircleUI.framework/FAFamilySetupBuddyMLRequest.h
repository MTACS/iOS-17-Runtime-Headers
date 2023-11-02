
@interface FAFamilySetupBuddyMLRequest : AAFamilyRequest {
    ACAccount * _iTunesAccount;
    NSString * _inviteCode;
}

@property (setter=setiTunesAccount:, nonatomic, retain) ACAccount *iTunesAccount;
@property (nonatomic, copy) NSString *inviteCode;

- (void).cxx_destruct;
- (id)iTunesAccount;
- (id)inviteCode;
- (bool)isUserInitiated;
- (void)setInviteCode:(id)arg1;
- (void)setiTunesAccount:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end
