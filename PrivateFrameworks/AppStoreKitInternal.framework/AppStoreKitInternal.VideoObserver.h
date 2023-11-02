
@interface AppStoreKitInternal.VideoObserver : NSObject {
    void delegate;
    void playerItemObserversAdded;
    void playerObserversAdded;
    void timeBoundaryObserver;
}

- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)playbackErrorOccurredWithNotification:(id)arg1;
- (void)videoDidPlayToEnd;
- (void)videoPlaybackDidStall;

@end
