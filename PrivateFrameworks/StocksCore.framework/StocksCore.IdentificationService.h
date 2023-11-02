
@interface StocksCore.IdentificationService : NSObject <FCUserInfoObserving> {
    void observers;
    void sensitiveUserDefaults;
    void source;
    void stocksKitDefaults;
}

- (void).cxx_destruct;
- (id)init;
- (void)userInfoDidChangeAdsUserID:(id)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(bool)arg2;

@end
