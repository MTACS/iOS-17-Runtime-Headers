
@interface EKIdentityViewController : UIViewController <EKEditItemViewControllerProtocol> {
    <EKIdentityProtocol> * _identity;
    CNContactViewController * _personViewController;
    CNContactStore * _store;
}

@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) bool presentModally;
@property (nonatomic) bool useCustomBackButton;

+ (Class)_CNContactClass;
+ (Class)_CNContactStoreClass;
+ (Class)_CNContactStoreConfigurationClass;
+ (id)_CNLabelWork;
+ (Class)_CNLabeledValueClass;
+ (Class)_CNMutableContactClass;
+ (id)_createContactForIdentity:(id)arg1;
+ (id)_createContactStore;
+ (id)_fetchContactForIdentity:(id)arg1 store:(id)arg2 keysToFetch:(id)arg3;
+ (id)contactForIdentity:(id)arg1 keysToFetch:(id)arg2;

- (void).cxx_destruct;
- (id)CNContactEmailAddressesKey;
- (id)CNContactPhoneNumbersKey;
- (id)EKUI_oopContentBackgroundColor;
- (Class)_CNContactViewControllerClass;
- (void)_setIdentity:(id)arg1;
- (void)_updateControllerWithContact:(id)arg1 isNew:(bool)arg2;
- (id)initWithIdentity:(id)arg1;
- (void)loadView;

@end
