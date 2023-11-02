
@interface SUUIDonationStepViewController : UIViewController {
    SUUIGiftCharity * _charity;
    SUUIDonationConfiguration * _configuration;
    NSOperationQueue * _operationQueue;
}

@property (nonatomic, readonly) SUUIGiftCharity *charity;
@property (nonatomic, readonly) SUUIDonationConfiguration *donationConfiguration;
@property (nonatomic, readonly) SUUIDonationViewController *donationViewController;
@property (nonatomic, retain) NSOperationQueue *operationQueue;

- (void).cxx_destruct;
- (id)charity;
- (id)donationConfiguration;
- (id)donationViewController;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;

@end
