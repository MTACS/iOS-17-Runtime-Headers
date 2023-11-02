
@interface WBSTopHitCompletionMatch : WBSBookmarkAndHistoryCompletionMatch {
    bool  _shouldPreload;
}

- (id)initWithBookmarkAndHistoryCompletionMatch:(void*)arg1 userInput:(id)arg2 forQueryID:(long long)arg3 shouldPreload:(bool)arg4;
- (bool)isTopHit;
- (id)parsecDomainIdentifier;
- (bool)shouldPreload;

@end
