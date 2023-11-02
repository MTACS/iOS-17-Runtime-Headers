
@interface AMSPurchaseQueueConfiguration : NSObject {
    <AMSBagProtocol> * _bag;
    <AMSPurchaseResponseProtocol> * _delegate;
    Class  _purchaseTaskClass;
}

@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, retain) <AMSPurchaseResponseProtocol> *delegate;
@property (nonatomic, retain) Class purchaseTaskClass;

- (void).cxx_destruct;
- (id)bag;
- (id)delegate;
- (id)initWithBag:(id)arg1;
- (Class)purchaseTaskClass;
- (void)setDelegate:(id)arg1;
- (void)setPurchaseTaskClass:(Class)arg1;

@end
