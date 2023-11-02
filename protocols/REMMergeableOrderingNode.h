
@protocol REMMergeableOrderingNode <NSObject, REMObjectIDProviding>

@required

- (REMObjectID *)accountID;
- (bool)isSubContainer;
- (REMObjectID *)parentOwnerID;
- (REMObjectID *)parentSubContainerID;
- (void)removeFromParentWithAccountChangeItem:(REMAccountChangeItem *)arg1;
- (REMSaveRequest *)saveRequest;
- (void)setAccountID:(REMObjectID *)arg1;
- (void)setParentOwnerID:(REMObjectID *)arg1;
- (void)setParentSubContainerID:(REMObjectID *)arg1;

@end
