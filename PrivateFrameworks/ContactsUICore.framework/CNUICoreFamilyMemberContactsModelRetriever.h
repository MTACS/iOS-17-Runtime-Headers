
@interface CNUICoreFamilyMemberContactsModelRetriever : NSObject <CNUICoreFamilyMemberContactsModelFetching> {
    <CNUICoreContactStoreFacade> * _contactStore;
    <CNDowntimeWhitelistContainerFetching> * _downtimeContainerFetcher;
    <CNUICoreFamilyInfoFetching> * _familyInfoFetcher;
    CNSchedulerProvider * _schedulerProvider;
}

@property (nonatomic, readonly) <CNScheduler> *backgroundOrImmediateScheduler;
@property (nonatomic, readonly) <CNUICoreContactStoreFacade> *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CNDowntimeWhitelistContainerFetching> *downtimeContainerFetcher;
@property (nonatomic, readonly) <CNUICoreFamilyInfoFetching> *familyInfoFetcher;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CNSchedulerProvider *schedulerProvider;
@property (readonly) Class superclass;

+ (long long)contactFormatterStyle;
+ (id)keysToFetch;

- (void).cxx_destruct;
- (id)allContacts;
- (id)allContactsModel;
- (id)backgroundOrImmediateScheduler;
- (id)contactStore;
- (id)downtimeContainerFetcher;
- (id)familyInfoFetcher;
- (id)init;
- (id)initWithContactStoreFacade:(id)arg1 familyInfoFetcher:(id)arg2 downtimeContainerFetcher:(id)arg3 schedulerProvider:(id)arg4;
- (id)initWithDowntimeContainerFetcher:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithFamilyMember:(id)arg1 schedulerProvider:(id)arg2;
- (id)modelBuilderForContacts:(id)arg1 familyInfo:(id)arg2;
- (id)modelBuilderForWhitelistedContacts:(id)arg1 familyInfo:(id)arg2;
- (id)schedulerProvider;
- (id)whitelistedContactsModel;

@end
