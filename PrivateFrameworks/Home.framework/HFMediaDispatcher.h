
@interface HFMediaDispatcher : NSObject {
    NSHashTable * _appleMusicAccountObservers;
    ACAccountStore * _appleMusicAccountStore;
    NSArray * _appleMusicMagicAuthCapableAccounts;
}

@property (nonatomic, retain) NSHashTable *appleMusicAccountObservers;
@property (nonatomic, readonly) ACAccountStore *appleMusicAccountStore;
@property (nonatomic, copy) NSArray *appleMusicMagicAuthCapableAccounts;
@property (nonatomic, readonly) bool isUsingiCloud;

+ (id)sharedDispatcher;

- (void).cxx_destruct;
- (void)_accountsStoreWasUpdated:(id)arg1;
- (bool)_reloadAppleMusicMagicAuthCapableAccounts;
- (void)_setupAppleMusicAccountStoreIfNecessary;
- (void)addAppleMusicAccountObserver:(id)arg1;
- (id)appleMusicAccountObservers;
- (id)appleMusicAccountStore;
- (id)appleMusicMagicAuthCapableAccounts;
- (id)init;
- (bool)isUsingiCloud;
- (void)removeAppleMusicAccountObserver:(id)arg1;
- (void)setAppleMusicAccountObservers:(id)arg1;
- (void)setAppleMusicMagicAuthCapableAccounts:(id)arg1;

@end
