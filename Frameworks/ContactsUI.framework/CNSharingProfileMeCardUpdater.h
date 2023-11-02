
@interface CNSharingProfileMeCardUpdater : NSObject {
    CNContactStore * _contactStore;
    <CNSharingProfileMeCardUpdaterDelegate> * _delegate;
    CNContact * _imageContact;
    CNSharingProfileLogger * _logger;
    CNMutableContact * _meContact;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic) <CNSharingProfileMeCardUpdaterDelegate> *delegate;
@property (nonatomic, retain) CNContact *imageContact;
@property (nonatomic, retain) CNSharingProfileLogger *logger;
@property (nonatomic, readonly) CNMutableContact *meContact;

- (void).cxx_destruct;
- (id)alertControllerForMeCardUpdateWithImageContact:(id)arg1;
- (id)contactStore;
- (id)delegate;
- (id)imageContact;
- (id)initWithMeContact:(id)arg1 contactStore:(id)arg2;
- (id)logger;
- (id)meContact;
- (void)performSave;
- (void)setContactStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageContact:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)updateMeContactWithImageContact:(id)arg1;

@end
