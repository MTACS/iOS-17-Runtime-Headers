
@interface _BPSInnerBiomeSubscription : BMBookmarkableSubscription {
    BMAccessClient * _accessClient;
    <BPSSubscriber> * _downstream;
    BMStoreEnumerator * _enumerator;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _pendingDemand;
    bool  _recursion;
    NSString * _streamId;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithStreamEnumerator:(id)arg1 downstream:(id)arg2 streamId:(id)arg3 accessClient:(id)arg4;
- (id)newBookmark;
- (void)requestDemand:(long long)arg1;
- (id)upstreamSubscriptions;

@end
