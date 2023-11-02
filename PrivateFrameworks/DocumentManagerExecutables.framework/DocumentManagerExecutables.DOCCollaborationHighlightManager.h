
@interface DocumentManagerExecutables.DOCCollaborationHighlightManager : NSObject <SWHighlightCenterDelegate> {
    void coalescingTimer;
    void collaborationIdentifierToHighlightCache;
    void fetchQueue;
    void highlightCenter;
    void pendingIdentifiersToNotify;
}

- (void).cxx_destruct;
- (void)highlightCenterHighlightsDidChange:(id)arg1;
- (id)init;

@end
