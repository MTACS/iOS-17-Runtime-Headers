
@protocol CNUIContactsAuthorizationModelFetching <NSObject>

@required

- (CNFuture *)contactsAuthorizationModel;
- (CNFuture *)contactsAuthorizationModelByLoadingIconsOfRemoteItemsInModel:(CNUICoreContactsAuthorizationModel *)arg1;

@end
