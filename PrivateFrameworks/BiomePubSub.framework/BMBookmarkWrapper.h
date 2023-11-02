
@interface BMBookmarkWrapper : BPSPublisher <BMBookmarkablePublisher> {
    id  _initialState;
    BPSPublisher * _upstream;
}

@property (nonatomic, readonly) NSArray *bookmarkableUpstreams;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id initialState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BPSPublisher *upstream;

+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (bool)canStorePassThroughValueInBookmark;
- (id)init;
- (id)initWithUpstream:(id)arg1 initialState:(id)arg2;
- (id)initialState;
- (void)subscribe:(id)arg1;
- (id)upstream;
- (id)withBookmark:(id)arg1;

@end
