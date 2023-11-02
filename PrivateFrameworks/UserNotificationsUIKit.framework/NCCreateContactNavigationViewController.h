
@interface NCCreateContactNavigationViewController : NCModalNavigationController <CNContactViewControllerDelegate> {
    NSString * _bundleIdentifier;
    _UNNotificationContact * _contact;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <NCModalNavigationControllerDelegate><NCCreateContactNavigationViewControllerDelegate> *presenterDelegate;
@property (readonly) Class superclass;

+ (id)navigationControllerWithContact:(id)arg1 bundleIdentifier:(id)arg2 imageData:(id)arg3 presenterDelegate:(id)arg4;

- (void).cxx_destruct;
- (void)_cancelAddToContacts:(id)arg1;
- (id)_initWithContact:(id)arg1 bundleIdentifier:(id)arg2 imageData:(id)arg3 presenterDelegate:(id)arg4;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;

@end
