
@interface CNUICoreProposedContactsFetchingDecorator : NSObject <CNUICoreFamilyMemberContactsModelFetching> {
    <CNUICoreFamilyInfoFetching> * _familyInfoFetcher;
    <CNUICoreFamilyMemberContactsModelFetching> * _modelFetcher;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CNUICoreFamilyInfoFetching> *familyInfoFetcher;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNUICoreFamilyMemberContactsModelFetching> *modelFetcher;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

+ (id)modelWithProposedContactsFromFamilyInfo:(id)arg1;
+ (id)proposedContactsFromFamilyInfo:(id)arg1;

- (void).cxx_destruct;
- (id)allContactsModel;
- (id)familyInfoFetcher;
- (id)initWithModelFetcher:(id)arg1 familyInfoFetcher:(id)arg2 schedulerProvider:(id)arg3;
- (id)initWithModelFetcher:(id)arg1 familyMember:(id)arg2 schedulerProvider:(id)arg3;
- (id)modelFetcher;
- (id)schedulerProvider;
- (id)whitelistedContactsModel;

@end
