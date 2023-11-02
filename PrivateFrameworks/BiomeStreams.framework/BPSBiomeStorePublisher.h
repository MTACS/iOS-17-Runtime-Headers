
@interface BPSBiomeStorePublisher : BMBookmarkablePublisher {
    BMAccessClient * _accessClient;
    BMStoreBookmark * _bookmark;
    double  _endTime;
    BMStoreEnumerator * _enumerator;
    bool  _finished;
    unsigned long long  _lastEventCount;
    unsigned long long  _maxEvents;
    bool  _reversed;
    double  _startTime;
    BMStreamDatastoreReader * _streamDatastoreReader;
}

@property (nonatomic, retain) BMStoreEnumerator *enumerator;
@property (nonatomic) bool finished;
@property (nonatomic, readonly) NSString *streamId;

+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)_newEnumerator;
- (void)applyBookmark:(id)arg1;
- (id)bookmark;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (bool)canStorePassThroughValueInBookmark;
- (bool)completed;
- (id)enumerator;
- (bool)finished;
- (id)init;
- (id)initWithStreamDatastoreReader:(id)arg1 streamsAccessClient:(id)arg2;
- (id)initWithStreamId:(id)arg1 storeConfig:(id)arg2;
- (id)initWithStreamId:(id)arg1 storeConfig:(id)arg2 streamsAccessClient:(id)arg3;
- (id)initWithStreamId:(id)arg1 storeConfig:(id)arg2 streamsAccessClient:(id)arg3 eventDataClass:(Class)arg4;
- (id)nextEvent;
- (void)reset;
- (id)reverse;
- (void)setEnumerator:(id)arg1;
- (void)setFinished:(bool)arg1;
- (id)startWithSubscriber:(id)arg1;
- (id)streamId;
- (void)subscribe:(id)arg1;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)arg1;
- (id)withBookmark:(id)arg1;
- (id)withEndTime:(double)arg1;
- (id)withLastEvents:(unsigned long long)arg1;
- (id)withMaxEvents:(unsigned long long)arg1;
- (id)withStartTime:(double)arg1;

@end
