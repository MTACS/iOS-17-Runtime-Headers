
@protocol UMUserManagement_Private <NSObject>

@required

- (NSArray *)allUsers;
- (NSArray *)allUsersUnfiltered;
- (bool)userExists:(UMUser *)arg1;

@end
