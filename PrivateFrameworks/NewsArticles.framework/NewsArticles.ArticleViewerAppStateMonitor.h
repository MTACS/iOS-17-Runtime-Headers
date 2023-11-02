
@interface NewsArticles.ArticleViewerAppStateMonitor : NSObject <SXAppStateMonitor> {
    void onEnterBackgroundClosures;
    void onForegroundClosures;
    void onWindowBackgroundClosures;
    void onWindowForegroundClosures;
}

- (void).cxx_destruct;
- (id)init;
- (void)performOnApplicationDidBecomeActive:(id /* block */)arg1;
- (void)performOnApplicationDidEnterBackground:(id /* block */)arg1;
- (void)performOnApplicationWillEnterForeground:(id /* block */)arg1;
- (void)performOnApplicationWindowDidBecomeBackground:(id /* block */)arg1;
- (void)performOnApplicationWindowDidBecomeForeground:(id /* block */)arg1;

@end
