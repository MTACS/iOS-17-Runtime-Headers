
@interface AMSAccountCachedServerData : NSObject {
    AMSAccountCachedServerDataCore * _core;
}

@property (nonatomic, readonly) AMSAccountCachedServerDataCore *core;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)accountFlagsForAccountID:(id)arg1;
- (id)boolForKey:(unsigned long long)arg1 accountID:(id)arg2 updateBlock:(id /* block */)arg3;
- (id)core;
- (id)initWithWrappedInstance:(id)arg1;
- (id)intForKey:(unsigned long long)arg1 accountID:(id)arg2 updateBlock:(id /* block */)arg3;
- (void)setAccountFlags:(id)arg1 forAccountID:(id)arg2;
- (void)setAccountFlags:(id)arg1 forAccountID:(id)arg2 completion:(id /* block */)arg3;
- (void)setAutoPlay:(bool)arg1 forAccountID:(id)arg2;
- (void)setPersonalization:(bool)arg1 forAccountID:(id)arg2;
- (id)stringForKey:(unsigned long long)arg1 accountID:(id)arg2 updateBlock:(id /* block */)arg3;

@end
