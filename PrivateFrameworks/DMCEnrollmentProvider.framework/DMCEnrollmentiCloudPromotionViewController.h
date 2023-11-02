
@interface DMCEnrollmentiCloudPromotionViewController : DMCEnrollmentTemplateTableViewController <DMCDismissalAwareViewController> {
    <DMCEnrollmentiCloudPromotionViewControllerDelegate> * _delegate;
    NSString * _quotaString;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property <DMCEnrollmentiCloudPromotionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *quotaString;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (void)_setupBottomViewForType:(unsigned long long)arg1;
- (void)_setupUIForType:(unsigned long long)arg1;
- (id)delegate;
- (id)initWithType:(unsigned long long)arg1 delegate:(id)arg2;
- (void)leftBarButtonTapped:(id)arg1;
- (id)quotaString;
- (void)setDelegate:(id)arg1;
- (void)setQuotaString:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)viewControllerHasBeenDismissed;
- (void)viewWillAppear:(bool)arg1;

@end
