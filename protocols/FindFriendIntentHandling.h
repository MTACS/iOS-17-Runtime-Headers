
@protocol FindFriendIntentHandling <NSObject>

@required

- (void)handleFindFriend:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: FindFriendIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FindFriendIntentResponse *, void*
- (void)handleFindFriend:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: FindFriendIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FindFriendIntentResponse *, void*
- (void)resolveFriendForFindFriend:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: FindFriendIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FindFriendFriendResolutionResult *, void*
- (void)resolveFriendForFindFriend:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: FindFriendIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FindFriendFriendResolutionResult *, void*

@optional

- (void)confirmFindFriend:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: FindFriendIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FindFriendIntentResponse *, void*
- (void)confirmFindFriend:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: FindFriendIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FindFriendIntentResponse *, void*

@end
