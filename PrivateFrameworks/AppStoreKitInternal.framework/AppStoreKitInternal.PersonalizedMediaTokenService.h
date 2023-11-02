
@interface AppStoreKitInternal.PersonalizedMediaTokenService : NSObject <AMSMediaTokenServiceProtocol> {
    void accounts;
    void queue;
    void tokenService;
}

- (void).cxx_destruct;
- (void)accountsDidChange;
- (id)fetchMediaToken;
- (id)init;
- (void)invalidateMediaToken;

@end
