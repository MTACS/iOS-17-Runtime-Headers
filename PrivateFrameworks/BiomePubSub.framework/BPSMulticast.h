
@interface BPSMulticast : BMBookmarkablePublisher <BPSConnectablePublisher, BPSSubscriber> {
    unsigned long long  _bookmarkCount;
    bool  _connected;
    id /* block */  _createSubject;
    NSMutableArray * _downstreams;
    BPSMulticastDownstream * _electedMainDownstream;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _pendingEvents;
    unsigned long long  _resetCount;
    <BPSSubject><BPSSubscriber> * _subject;
    <BPSPublisher> * _upstream;
}

@property (nonatomic) unsigned long long bookmarkCount;
@property (nonatomic) bool connected;
@property (nonatomic, readonly) id /* block */ createSubject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *downstreams;
@property (nonatomic) BPSMulticastDownstream *electedMainDownstream;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *pendingEvents;
@property (nonatomic) unsigned long long resetCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (void)_connect;
- (void)applyBookmark:(id)arg1;
- (void)applyBookmarkNode:(id)arg1;
- (id)bookmark;
- (unsigned long long)bookmarkCount;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (bool)completedForMulticastDownstream:(id)arg1;
- (void)connect;
- (bool)connected;
- (id /* block */)createSubject;
- (id)downstreams;
- (id)electedMainDownstream;
- (id)initWithUpstream:(id)arg1 createSubject:(id /* block */)arg2;
- (id)lazySubject;
- (id)nextEvent;
- (id)nextEventForMulticastDownstream:(id)arg1;
- (id)pendingEvents;
- (void)registerMulticastDownstream:(id)arg1;
- (void)requestNextEvents;
- (void)reset;
- (unsigned long long)resetCount;
- (void)setBookmarkCount:(unsigned long long)arg1;
- (void)setConnected:(bool)arg1;
- (void)setDownstreams:(id)arg1;
- (void)setElectedMainDownstream:(id)arg1;
- (void)setPendingEvents:(id)arg1;
- (void)setResetCount:(unsigned long long)arg1;
- (id)startWithSubscriber:(id)arg1;
- (void)subscribe:(id)arg1;
- (void)subscribeTo:(id)arg1;
- (id)toPublisher;
- (id)upstream;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)arg1;

@end
