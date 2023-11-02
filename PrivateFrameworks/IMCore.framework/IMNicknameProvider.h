
@interface IMNicknameProvider : NSObject <ConversationKit.IMNicknameProviderForwardDeclarations> {
    IMNicknameProvider_Impl * _swiftImpl;
}

- (void).cxx_destruct;
- (id)allNicknamesForContact:(id)arg1;
- (void)bannerActionTapped:(id)arg1 IMNicknameBannerAction:(unsigned long long)arg2;
- (id)currentNicknameForContact:(id)arg1;
- (bool)hasObservedTransitionForHandleID:(id)arg1;
- (id)init;
- (void)markTransitionAsObservedForHandleID:(id)arg1 isAutoUpdate:(bool)arg2;
- (id)nicknameForContact:(id)arg1;
- (void)nicknameForCurrentUserWithCompletionHandler:(id /* block */)arg1;
- (id)nicknameForHandleID:(id)arg1;
- (id)pendingNicknameForContact:(id)arg1;
- (void)sendNameOnlyToHandleIDs:(id)arg1 fromHandleID:(id)arg2;
- (void)sendPersonalNicknameToHandleID:(id)arg1;
- (void)sendPersonalNicknameToHandleID:(id)arg1 fromHandleID:(id)arg2;
- (void)setNicknameListener:(id)arg1;
- (void)setPersonalNicknameWithContact:(id)arg1;
- (void)updatePendingNicknameWithContact:(id)arg1;

@end
