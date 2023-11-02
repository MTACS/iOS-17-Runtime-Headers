
@interface VideosUI.PostPlayDocumentViewController : VideosUI.DocumentRequestViewController <VUIPlaybackUpNextController> {
    void playbackUpNextDelegate;
    void postPlayContextData;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (double)playbackUpNextViewHeight;
- (void)recordUpNextImpressions;
- (void)setPlaybackUpNextContextData:(id)arg1;
- (void)setPlaybackUpNextDelegate:(id)arg1;
- (void)startAutoPlayAnimation;

@end
