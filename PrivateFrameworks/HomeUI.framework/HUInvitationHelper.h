
@interface HUInvitationHelper : NSObject <HFContactControllerDelegate> {
    HFContactController * _contactsController;
    CNContactFormatter * _contactsFormatter;
    <HUInvitationHelperDelegate> * _delegate;
    NSArray * _familyMembers;
    HMIncomingHomeInvitation * _invitation;
    CNContact * _inviterContact;
    NSString * _inviterID;
    bool  _isUnknownContact;
    unsigned long long  _mode;
}

@property (nonatomic, retain) HFContactController *contactsController;
@property (nonatomic, retain) CNContactFormatter *contactsFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUInvitationHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *detailText;
@property (nonatomic, retain) NSArray *familyMembers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *homeInvitationTitle;
@property (nonatomic, retain) HMIncomingHomeInvitation *invitation;
@property (nonatomic, retain) CNContact *inviterContact;
@property (nonatomic, retain) NSString *inviterID;
@property (nonatomic) bool isUnknownContact;
@property (nonatomic) unsigned long long mode;
@property (readonly) Class superclass;

+ (id)_dateFormatter;
+ (id)dateFormatter;

- (void).cxx_destruct;
- (void)_updateInviterContactInfo;
- (void)contactController:(id)arg1 didFinishDownloadingFamilyMemberAvatar:(id)arg2;
- (id)contactsController;
- (id)contactsFormatter;
- (id)delegate;
- (id)detailText;
- (id)familyMembers;
- (id)homeInvitationTitle;
- (id)initWithMode:(unsigned long long)arg1;
- (id)invitation;
- (id)inviterContact;
- (id)inviterID;
- (bool)isUnknownContact;
- (unsigned long long)mode;
- (id)requiredKeyDescriptors;
- (void)setContactsController:(id)arg1;
- (void)setContactsFormatter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFamilyMembers:(id)arg1;
- (void)setInvitation:(id)arg1;
- (void)setInviterContact:(id)arg1;
- (void)setInviterID:(id)arg1;
- (void)setIsUnknownContact:(bool)arg1;
- (void)setMode:(unsigned long long)arg1;

@end
