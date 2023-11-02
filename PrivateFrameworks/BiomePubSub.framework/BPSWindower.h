
@interface BPSWindower : BMBookmarkablePublisher <BMBookmarkablePublisher> {
    <BPSWindowAssigner> * _assigner;
    id /* block */  _key;
    <BPSPublisher> * _upstream;
    NSMutableDictionary * _windows;
}

@property (nonatomic, readonly) <BPSWindowAssigner> *assigner;
@property (nonatomic, readonly) NSArray *bookmarkableUpstreams;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ key;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <BPSPublisher> *upstream;
@property (nonatomic, retain) NSMutableDictionary *windows;

+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (void)applyBookmark:(id)arg1;
- (id)assigner;
- (id)bookmark;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (bool)canStorePassThroughValueInBookmark;
- (bool)completed;
- (id)firstCompletedWindow;
- (id)firstCompletedWindowShouldRemove:(bool)arg1;
- (id)init;
- (id)initWithUpstream:(id)arg1 key:(id /* block */)arg2 assigner:(id)arg3;
- (id /* block */)key;
- (id)nextEvent;
- (void)reset;
- (void)setKey:(id /* block */)arg1;
- (void)setWindows:(id)arg1;
- (void)subscribe:(id)arg1;
- (void)updateWindowsWithEvent:(id)arg1;
- (id)upstream;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)arg1;
- (id)windows;

@end
