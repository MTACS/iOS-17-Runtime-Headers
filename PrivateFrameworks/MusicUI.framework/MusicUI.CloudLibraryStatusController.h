
@interface MusicUI.CloudLibraryStatusController : _TtCs12_SwiftObject {
    void appLifeCycleCoordinator;
    void center;
    void cloudLibraryIsEnabled;
    void cloudLibraryIsLoaded;
    void cloudLibraryStatusDidChange;
    void controller;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  onApplicationDidBecomeActiveEventSubscription;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  onApplicationWillResignActiveEventSubscription;
}

- (void)cloudLibraryEnabledDidChange:(id)arg1;
- (void)cloudLibraryIsLoadedDidChange:(id)arg1;

@end
