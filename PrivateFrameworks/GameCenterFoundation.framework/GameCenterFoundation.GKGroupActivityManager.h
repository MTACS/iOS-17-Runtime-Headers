
@interface GameCenterFoundation.GKGroupActivityManager : NSObject {
    void cachedDevicePushToken;
    void groupSession;
    void groupSessionEligibilityObserver;
    void groupSessionStateAndMessagesObserver;
    void hasRequestedToJoin;
    void inviteesManager;
    void managerSupport;
    void matchmakingSupport;
    void messenger;
    void previousMatchRequest;
}

- (void).cxx_destruct;
- (void)activateWithGame:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 19: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)applicationWillTerminate;
- (void)endWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)init;
- (id)initWithMatchmakingSupport:(id)arg1;
- (bool)isEligibleForGroupSession;
- (void)leaveWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)playerDisconnectWithPlayer:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 15: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, long, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)resetWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)sharingControllerItemProviderWithGame:(id)arg1 error:(id*)arg2;
- (void)startGame;
- (void)startLookingForSessions;
- (void)update;

@end
