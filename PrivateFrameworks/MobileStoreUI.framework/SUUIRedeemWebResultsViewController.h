
@interface SUUIRedeemWebResultsViewController : SUUIRedeemResultsViewController <SUStorePageViewControllerResponder>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canShowResultsForRedeem:(id)arg1;

- (void)dealloc;
- (void)storePage:(id)arg1 finishedWithSuccess:(bool)arg2;
- (void)viewDidLoad;

@end
