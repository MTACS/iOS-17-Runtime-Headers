
@interface MPStoreSocialServiceTransientStatesSnapshot : NSObject {
    NSMutableDictionary * _transientFollowPendingRequestStatesPerProfileID;
    NSMutableDictionary * _transientFollowStatesPerProfileID;
}

- (void).cxx_destruct;
- (void)_addTransientFollowState:(long long)arg1 transientFollowPendingRequestState:(long long)arg2 forPerson:(id)arg3;
- (id)init;
- (long long)transientFollowPendingRequestStateForPerson:(id)arg1;
- (long long)transientFollowStateForPerson:(id)arg1;

@end
