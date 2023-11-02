
@interface FCPurchaseProvider : NSObject <FCPurchaseProviderType> {
    FCPrivateChannelMembershipController * _privateChannelMembershipController;
    FCPurchaseController * _purchaseController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *purchasedTagIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)purchasedTagIDs;

@end
