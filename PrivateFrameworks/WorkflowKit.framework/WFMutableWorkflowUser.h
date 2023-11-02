
@interface WFMutableWorkflowUser : WFWorkflowUser {
    NSString * email;
    NSString * fullName;
    long long  mainIdentity;
    NSURL * profileImageURL;
    NSString * twitter;
    NSURL * websiteURL;
}

@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic) long long mainIdentity;
@property (nonatomic, retain) NSURL *profileImageURL;
@property (nonatomic, copy) NSString *twitter;
@property (nonatomic, retain) NSURL *websiteURL;

- (void).cxx_destruct;
- (id)email;
- (id)fullName;
- (long long)mainIdentity;
- (id)profileImageURL;
- (void)setEmail:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setMainIdentity:(long long)arg1;
- (void)setProfileImageURL:(id)arg1;
- (void)setTwitter:(id)arg1;
- (void)setWebsiteURL:(id)arg1;
- (id)twitter;
- (id)websiteURL;

@end
