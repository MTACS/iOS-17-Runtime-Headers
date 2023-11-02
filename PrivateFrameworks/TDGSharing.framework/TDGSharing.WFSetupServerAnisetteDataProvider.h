
@interface TDGSharing.WFSetupServerAnisetteDataProvider : NSObject <AKAnisetteServiceProtocol, NSCoding, NSSecureCoding> {
    void companionAuthDevice;
    void session;
    void transportableAuthKitAccount;
}

@property (nonatomic, retain) AKDevice *companionAuthDevice;
@property (nonatomic, retain) CUMessageSession *session;
@property (nonatomic, retain) ACAccount *transportableAuthKitAccount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)companionAuthDevice;
- (void)encodeWithCoder:(id)arg1;
- (void)eraseAnisetteWithCompletion:(id /* block */)arg1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)provisionAnisetteWithCompletion:(id /* block */)arg1;
- (id)session;
- (void)setCompanionAuthDevice:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTransportableAuthKitAccount:(id)arg1;
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(id /* block */)arg2;
- (id)transportableAuthKitAccount;

@end
