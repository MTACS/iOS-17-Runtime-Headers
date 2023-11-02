
@interface _BMDSLStatePublisher : BMBookmarkablePublisher {
    BMDSLState * _DSLState;
    <BMDSLStateValue> * _state;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, readonly) BMDSLState *DSLState;
@property (nonatomic, retain) <BMDSLStateValue> *state;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)DSLState;
- (void)applyBookmark:(id)arg1;
- (id)bookmark;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (bool)canStorePassThroughValueInBookmark;
- (id)init;
- (id)initWithUpstream:(id)arg1 state:(id)arg2 DSLState:(id)arg3;
- (id)nextEvent;
- (void)setState:(id)arg1;
- (id)state;
- (void)subscribe:(id)arg1;
- (id)upstream;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)arg1;

@end
