
@interface AIMLInstrumentationStreams.EventGraphsPublisher : BMBookmarkablePublisher {
    void inner;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void upstream;
    void windowLength;
}

@property (nonatomic, readonly) NSArray *bookmarkableUpstreams;

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (id)init;
- (void)subscribe:(id)arg1;

@end
