
@interface WFSettingsClientBiomeReversalArbiter : NSObject {
    BPSPublisher * _publisher;
    BPSPublisher * _reversePublisher;
}

@property (nonatomic, readonly) BPSPublisher *publisher;
@property (nonatomic, readonly) BPSPublisher *reversePublisher;

+ (id)reversePublisherOptions;

- (void).cxx_destruct;
- (void)getBookmarkForCurrentStateWithCompletionHandler:(id /* block */)arg1;
- (void)getReversalStateWithBookmark:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithBiomeStream:(id)arg1;
- (id)initWithPublisher:(id)arg1 reversePublisher:(id)arg2;
- (bool)lastEventEquals:(id)arg1;
- (id)publisher;
- (id)reversePublisher;

@end
