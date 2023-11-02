
@interface GameCenterUI.ArtworkLoader : _TtCs12_SwiftObject <GKImageRequestDelegate> {
    void accessQueue;
    void completionHandlers;
    void isOccluded;
    void requestCompletionMap;
    void resourceLoader;
}

- (void)imageRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)imageRequest:(id)arg1 didLoadImage:(id)arg2;

@end
