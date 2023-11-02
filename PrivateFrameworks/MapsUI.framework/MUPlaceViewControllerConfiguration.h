
@interface MUPlaceViewControllerConfiguration : NSObject <NSCopying> {
    CNContactNavigationController<CNContactViewControllerPrivateDelegate> * _contactsNavigationController;
    CNContactViewController * _contactsViewController;
    UIViewController * _headerViewController;
    unsigned long long  _options;
}

@property (nonatomic) CNContactNavigationController<CNContactViewControllerPrivateDelegate> *contactsNavigationController;
@property (nonatomic, retain) CNContactViewController *contactsViewController;
@property (nonatomic, retain) UIViewController *headerViewController;
@property (nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (id)contactsNavigationController;
- (id)contactsViewController;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)headerViewController;
- (unsigned long long)options;
- (void)setContactsNavigationController:(id)arg1;
- (void)setContactsViewController:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
