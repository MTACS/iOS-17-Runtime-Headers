
@interface IMNicknameProvider_Impl : NSObject {
    void daemonConnection;
    void listener;
}

- (void).cxx_destruct;
- (id)allNicknamesForContact:(id)arg1;
- (void)bannerActionTappedFrom:(id)arg1 on:(unsigned long long)arg2;
- (id)currentNicknameForContact:(id)arg1;
- (void)dealloc;
- (bool)hasObservedTransitionForHandleID:(id)arg1;
- (id)init;
- (void)markTransitionAsObservedForHandleID:(id)arg1 isAutoUpdate:(bool)arg2;
- (id)nicknameForContact:(id)arg1;
- (void)nicknameForCurrentUserWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 16: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, inout int, BOOL, /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)nicknameForHandleID:(id)arg1;
- (void)nicknamesDidChangeWithNotification:(id)arg1;
- (id)pendingNicknameForContact:(id)arg1;
- (void)sendNameOnlyTo:(id)arg1 from:(id)arg2;
- (void)sendPersonalNicknameTo:(id)arg1;
- (void)sendPersonalNicknameTo:(id)arg1 from:(id)arg2;
- (void)setNicknameListener:(id)arg1;
- (void)setPersonalNicknameWith:(id)arg1;
- (void)updatePendingNicknameWith:(id)arg1;

@end
