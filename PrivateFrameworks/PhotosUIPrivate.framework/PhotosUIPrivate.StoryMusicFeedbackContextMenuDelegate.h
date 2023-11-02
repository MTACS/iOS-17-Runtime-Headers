
@interface PhotosUIPrivate.StoryMusicFeedbackContextMenuDelegate : NSObject <UIContextMenuInteractionDelegate> {
    void audioAssetProvider;
    void presentationViewController;
    void storyViewModel;
}

- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)init;

@end
