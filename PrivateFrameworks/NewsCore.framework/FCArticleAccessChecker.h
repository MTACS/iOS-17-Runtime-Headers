
@interface FCArticleAccessChecker : FCMultiAccessChecker {
    <FCPaidAccessCheckerType> * _paidAccessChecker;
    FCPrivateChannelMembershipController * _privateChannelMembershipController;
}

@property (nonatomic, readonly) <FCPaidAccessCheckerType> *paidAccessChecker;
@property (nonatomic, readonly) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAccessCheckers:(id)arg1;
- (id)initWithPaidAccessChecker:(id)arg1 privateChannelMembershipController:(id)arg2;
- (id)paidAccessChecker;
- (id)privateChannelMembershipController;

@end
