
@interface AMSBagCache : NSObject {
    void lock;
}

- (void).cxx_destruct;
- (id)bagWithIdentifier:(id)arg1 accountProviderIdentity:(id)arg2 accountMediaType:(id)arg3 orCreateUsingBlock:(id /* block */)arg4;
- (id)init;
- (void)removeAll;

@end
