
@interface EMSenderRepository : EMRepository

+ (id)log;
+ (id)remoteInterface;

- (id)performQuery:(id)arg1 withObserver:(id)arg2;
- (void)refreshQueryWithObserver:(id)arg1;
- (void)simpleAddressesForRelevantSendersWithCompletion:(id /* block */)arg1;

@end
