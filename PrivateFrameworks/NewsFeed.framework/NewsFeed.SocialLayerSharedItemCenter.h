
@interface NewsFeed.SocialLayerSharedItemCenter : NSObject <SLHighlightCenterDelegate> {
    void delegate;
    void lazyHighlightCenter;
}

- (void).cxx_destruct;
- (void)highlightCenter:(id)arg1 didRemoveHighlights:(id)arg2;
- (void)highlightCenterDidAddHighlights:(id)arg1;
- (id)init;

@end
