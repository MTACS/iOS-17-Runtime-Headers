
@interface AIMLInstrumentationStreams.SiriConversationPublisher : BMBookmarkablePublisher {
    void inner;
    void upstream;
}

@property (nonatomic, readonly) NSArray *bookmarkableUpstreams;

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (id)init;
- (void)subscribe:(id)arg1;

@end
