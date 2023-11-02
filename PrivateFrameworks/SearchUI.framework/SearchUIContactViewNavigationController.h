
@interface SearchUIContactViewNavigationController : UINavigationController <CNContactViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_canShowWhileLocked;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)initWithContact:(id)arg1;

@end
