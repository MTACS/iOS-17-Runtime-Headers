
@interface ContactsUI.FindMyLocateSession : NSObject {
    void _session;
    void friendsUpdateTask;
    void friendshipUpdateCallback;
    void initContinuations;
    void isInitialized;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void serialQueue;
}

@property (nonatomic, copy) id /* block */ friendshipUpdateCallback;

+ (bool)hasCorrectPermissionsForLocationSharing;

- (void).cxx_destruct;
- (long long)friendshipState:(id)arg1;
- (id /* block */)friendshipUpdateCallback;
- (void)getAllFriendIdsWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)sendFriendshipOfferTo:(id)arg1 end:(long long)arg2 isFromGroup:(bool)arg3 completion:(id /* block */)arg4;
- (void)setFriendshipUpdateCallback:(id /* block */)arg1;
- (void)startUpdatingFriendsWithInitialUpdates:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 11: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)stopSharingLocationWith:(id)arg1 isFromGroup:(bool)arg2 completion:(id /* block */)arg3;
- (void)stopUpdatingFriendsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
