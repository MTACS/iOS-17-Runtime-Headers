
@interface MKPlaceCardFooterActionsViewController : MKPlaceCardActionsViewController <MKModuleViewControllerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_canShowWhileLocked;
- (void)reloadData;
- (void)viewDidLoad;

@end
