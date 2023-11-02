
@interface LPLinkMetadataObserver : NSObject {
    id /* block */  _callback;
    bool  _hasScheduledCallback;
    LPLinkMetadata * _metadata;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMetadata:(id)arg1 callback:(id /* block */)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)stopObserving;

@end
