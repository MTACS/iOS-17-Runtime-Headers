
@interface AFUIContactsController : NSObject <CNContactPickerDelegate, CNContactViewControllerDelegate> {
    bool  _alwaysAllowsNamePicking;
    <AFUIContactPropertyPickerDelegate> * _contactPropertyPickerDelegate;
    CNContactStore * _contactStore;
    CNContact * _me;
    NSMutableArray * _meDisplayNameObservers;
}

@property bool alwaysAllowsNamePicking;
@property <AFUIContactPropertyPickerDelegate> *contactPropertyPickerDelegate;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CNContact *me;
@property (retain) NSMutableArray *meDisplayNameObservers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_customInfoForContactProperty:(id)arg1 useMultilineFallback:(bool)arg2;
- (void)_loadMe;
- (id)_meDisplayName;
- (void)addMeDisplayNameObserverAndGetInitialValue:(id)arg1;
- (id)allContactsViewControllerForTextContentType:(id)arg1;
- (bool)alwaysAllowsNamePicking;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)contactPropertyPickerDelegate;
- (id)contactStore;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (id)contactsKeysForTextContentType:(id)arg1;
- (void)copyAddressContactInfoFromContactInfo:(id)arg1 toContactInfo:(id)arg2;
- (void)copyPhoneContactInfoFromContactInfo:(id)arg1 toContactInfo:(id)arg2;
- (id)formattedDateForComponents:(id)arg1;
- (id)init;
- (id)me;
- (id)meCardViewControllerForTextContentType:(id)arg1;
- (id)meContactInfosForTextContentType:(id)arg1;
- (id)meDisplayNameObservers;
- (void)removeMeDisplayNameObserver:(id)arg1;
- (void)setAlwaysAllowsNamePicking:(bool)arg1;
- (void)setContactPropertyPickerDelegate:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setMe:(id)arg1;
- (void)setMeDisplayNameObservers:(id)arg1;
- (void)unifyPhoneNumberAndAddressDataAcrossContactInfos:(id)arg1 withTextContentType:(id)arg2;

@end
