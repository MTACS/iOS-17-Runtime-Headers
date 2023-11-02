
@interface PodcastsFoundation.RSSFeedUpdaterJob : _TtCs12_SwiftObject {
    void completion;
    void ctx;
    void externalFeedDownloader;
    void feedUniquenessHash;
    void ingesterProvider;
    void metricsData;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  request;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  signpostID;
    void state;
    void updaterJobUUID;
    void workQueue;
}

@end
