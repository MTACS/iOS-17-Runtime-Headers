
@interface FCMockPurchaseIntegrityChecker : NSObject <FCPurchaseIntegrityChecker> {
    unsigned long long  _mockedCheckResult;
}

@property (nonatomic) unsigned long long mockedCheckResult;

+ (id)mockPurchaseIntegrityCheckForFailure;
+ (id)mockPurchaseIntegrityCheckForSuccess;

- (void)isUserEntitledToSubscriptionForPurchaseID:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)mockedCheckResult;
- (void)setMockedCheckResult:(unsigned long long)arg1;

@end
