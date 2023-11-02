
@interface SeymourUI.CatalogTipPlayerPresenter : _TtCs12_SwiftObject {
    void activationState;
    void artworkImageLoader;
    void audioSessionCoordinator;
    void catalogClient;
    void display;
    void eventHub;
    void hasPublishedMediaEvent;
    void isPresentingSummary;
    void metricTopicRoutingBehavior;
    void options;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pageContext;
    void periodicTimeObserver;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  streamingArtwork;
    void streamingArtworkCropCode;
    void streamingSubtitle;
    void streamingTitle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  streamingURL;
    void summaryNavigationHandlers;
    void summaryPresenter;
    void tipIdentifier;
}

- (void)onPlayerFinished;

@end
