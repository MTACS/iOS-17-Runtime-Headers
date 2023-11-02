
@protocol CNUICoreFamilyMemberContactsModelFetching <NSObject>

@required

- (CNFuture *)allContactsModel;
- (CNFuture *)whitelistedContactsModel;

@end
