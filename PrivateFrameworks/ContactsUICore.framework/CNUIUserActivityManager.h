
@interface CNUIUserActivityManager : NSObject {
    <CNLSApplicationWorkspace> * _applicationWorkspace;
    CNContactStore * _contactStore;
    <CNUIInteractionDonor> * _interactionDonor;
}

@property (nonatomic, readonly) <CNLSApplicationWorkspace> *applicationWorkspace;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) <CNUIInteractionDonor> *interactionDonor;

+ (id)descriptorForRequiredKeys;
+ (id)log;

- (void).cxx_destruct;
- (id)applicationWorkspace;
- (id)contactStore;
- (id)initWithApplicationWorkspace:(id)arg1;
- (id)initWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2;
- (id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 interactionDonor:(id)arg3;
- (id)interactionDonor;
- (id)makeActivityAdvertisingViewingGroups;
- (id)makeActivityAdvertisingViewingList;
- (id)makeActivityAdvertisingViewingOfContact:(id)arg1;
- (void)publishRequestToCreateContact:(id)arg1;
- (void)publishRequestToEditContact:(id)arg1;
- (void)updateUserActivityState:(id)arg1 withContentsOfContact:(id)arg2;
- (void)updateUserActivityState:(id)arg1 withContentsOfListTopContact:(id)arg2 displayedContact:(id)arg3 searchString:(id)arg4 isShowingGroups:(bool)arg5;

@end
