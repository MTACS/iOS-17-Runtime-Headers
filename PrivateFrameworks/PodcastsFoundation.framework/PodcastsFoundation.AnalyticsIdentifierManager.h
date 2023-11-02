
@interface PodcastsFoundation.AnalyticsIdentifierManager : NSObject {
    void accountStore;
    void accountsMatch;
    void identifierPromise;
    void promiseLock;
    void store;
}

@property (nonatomic) bool accountsMatch;
@property (nonatomic, retain) id identifierPromise;

+ (id)kMTResetIdentifierKey;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)accountsMatch;
- (id)identifierPromise;
- (id)init;
- (void)resetIdentifiers;
- (void)resetIfNeeded;
- (void)setAccountsMatch:(bool)arg1;
- (void)setIdentifierPromise:(id)arg1;
- (void)updateIdentifiers;

@end
