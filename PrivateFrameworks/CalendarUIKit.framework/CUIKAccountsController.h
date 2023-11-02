
@interface CUIKAccountsController : NSObject {
    ACAccountStore * _accountStore;
}

+ (void)initialize;
+ (void)invalidate;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_accountForAccountIdentifier:(id)arg1;
- (void)_accountStoreDidChange:(id)arg1;
- (id)_displayAccountForAccountWithIdentifier:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (id)accountStore;
- (id)accountTypeTitleForSource:(id)arg1;
- (id)accountTypeTitleForSourceWithExternalId:(id)arg1;
- (void)dealloc;
- (bool)haveiCloudCalendarAccountInSources:(id)arg1;
- (id)init;
- (int)sortOrderForSource:(id)arg1;
- (int)sortOrderForSourceType:(long long)arg1;
- (int)sortOrderForStoreType:(long long)arg1;
- (bool)sourceIsManaged:(id)arg1;
- (id)titleForSource:(id)arg1 forBeginningOfSentence:(bool)arg2;

@end
