
@interface SKUIDonationStepViewController : UIViewController {
    SKUIGiftCharity * _charity;
    SKUIDonationConfiguration * _configuration;
    NSOperationQueue * _operationQueue;
}

@property (nonatomic, readonly) SKUIGiftCharity *charity;
@property (nonatomic, readonly) SKUIDonationConfiguration *donationConfiguration;
@property (nonatomic, readonly) SKUIDonationViewController *donationViewController;
@property (nonatomic, retain) NSOperationQueue *operationQueue;

- (void).cxx_destruct;
- (id)charity;
- (id)donationConfiguration;
- (id)donationViewController;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;

@end
