
@interface GKVoiceChatSessionListener : NSObject {
    NSMutableArray * _conferenceList;
    GKSessionInternal * _gkSession;
    GKRWLock * _rwlock;
}

- (id)currentSessions;
- (void)dealloc;
- (id)initWithSession:(id)arg1;
- (void)receivedNewVoiceChatOOBMessage:(id)arg1 fromPeerID:(id)arg2;
- (void)registerNewGKVoiceChatSession:(id)arg1;
- (void)removeSession:(id)arg1;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(unsigned int)arg3;

@end
