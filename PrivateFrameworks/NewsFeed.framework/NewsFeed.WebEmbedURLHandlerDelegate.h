
@interface NewsFeed.WebEmbedURLHandlerDelegate : NSObject <NUURLHandlerDelegate> {
    void webEmbedCoordinator;
    void webEmbedIdentifier;
    void webLinkPresentingViewController;
}

- (void).cxx_destruct;
- (void)URLHandler:(id)arg1 wantsToPresentViewController:(id)arg2 animated:(bool)arg3;
- (void)URLHandler:(id)arg1 willOpenURL:(id)arg2;
- (id)init;

@end
