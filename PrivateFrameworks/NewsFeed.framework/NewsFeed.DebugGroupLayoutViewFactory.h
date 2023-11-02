
@interface NewsFeed.DebugGroupLayoutViewFactory : NSObject <UIDragInteractionDelegate> {
    void cellSelectionRenderer;
    void colorPaletteProvider;
    void coverChannelViewRenderer;
    void coverIssueViewRenderer;
    void formatLayoutViewRenderer;
    void hiddenContentEffectRenderer;
    void imageHeadlineViewRenderer;
    void internalErrorViewRenderer;
}

- (void).cxx_destruct;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)init;

@end
