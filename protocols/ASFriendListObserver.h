
@protocol ASFriendListObserver <NSObject>

@required

- (void)friendListDidLoadCompetitions;
- (void)friendListDidUpdate:(NSSet *)arg1;

@end
