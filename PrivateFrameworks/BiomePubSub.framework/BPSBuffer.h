
@interface BPSBuffer : BMBookmarkablePublisher {
    NSMutableArray * _buffer;
    unsigned long long  _prefetch;
    unsigned long long  _size;
    <BPSPublisher> * _upstream;
    NSMutableArray * _values;
    unsigned long long  _whenFull;
}

@property (nonatomic, retain) NSMutableArray *buffer;
@property (nonatomic, readonly) unsigned long long prefetch;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) <BPSPublisher> *upstream;
@property (nonatomic, retain) NSMutableArray *values;
@property (nonatomic, readonly) unsigned long long whenFull;

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (void)addToBuffer:(id)arg1;
- (void)applyBookmark:(id)arg1;
- (id)bookmark;
- (id)bookmarkableUpstreams;
- (id)buffer;
- (bool)canStoreInternalStateInBookmark;
- (id)initWithUpstream:(id)arg1 size:(unsigned long long)arg2 prefetch:(unsigned long long)arg3 whenFull:(unsigned long long)arg4;
- (id)initWithUpstream:(id)arg1 size:(unsigned long long)arg2 prefetch:(unsigned long long)arg3 whenFull:(unsigned long long)arg4 values:(id)arg5;
- (id)nextEvent;
- (unsigned long long)prefetch;
- (void)reset;
- (void)setBuffer:(id)arg1;
- (void)setValues:(id)arg1;
- (unsigned long long)size;
- (void)subscribe:(id)arg1;
- (id)upstream;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)arg1;
- (id)values;
- (unsigned long long)whenFull;

@end
