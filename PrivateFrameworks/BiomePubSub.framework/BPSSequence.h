
@interface BPSSequence : BMBookmarkablePublisher {
    NSEnumerator * _enumerator;
    bool  _finished;
}

@property (nonatomic, retain) NSEnumerator *enumerator;
@property (nonatomic) bool finished;

+ (id)new;

- (void).cxx_destruct;
- (void)applyBookmark:(id)arg1;
- (id)bookmark;
- (id)bookmarkableUpstreams;
- (bool)completed;
- (id)enumerator;
- (bool)finished;
- (id)init;
- (id)initWithBookmarkableEnumerator:(id)arg1;
- (id)initWithEnumerator:(id)arg1;
- (id)initWithSequence:(id)arg1;
- (id)nextEvent;
- (void)reset;
- (void)setEnumerator:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)subscribe:(id)arg1;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)arg1;

@end
