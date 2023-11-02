
@interface AMSDelegateAuthenticateRequestTask : AMSTask <AMSBagConsumer, AMSURLProtocolDelegate, NSURLSessionDelegate> {
    ACAccount * _account;
}

@property (nonatomic, readonly) ACAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)_encodedURLRequest;
- (id)account;
- (id)initWithAccount:(id)arg1;
- (id)perform;

@end
