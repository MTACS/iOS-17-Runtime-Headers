
@interface BMSocialHighlightFeedbackStream : NSObject <BMSourceStream, BMStreamDeleting, BMSyncableStream, BMTimeBasedPublisherStream> {
    BMRestrictedStream * _stream;
}

@property (nonatomic, readonly) NSString *identifier;

+ (id)new;

- (void).cxx_destruct;
- (void)deleteEventsWithPredicate:(id /* block */)arg1;
- (void)deleteLocalAndRemoteEventsWithPredicateBlock:(id /* block */)arg1;
- (void)deleteLocalAndRemoteEventsWithReason:(unsigned long long)arg1 usingPredicateBlock:(id /* block */)arg2;
- (id)identifier;
- (id)init;
- (id)initWithPruningPolicy:(id)arg1;
- (id)publisher;
- (id)publisherFromStartTime:(double)arg1;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(bool)arg5;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(bool)arg4;
- (id)publishersForDevices:(id)arg1 startTime:(double)arg2 includeLocal:(bool)arg3 pipeline:(id /* block */)arg4;
- (id)publishersForRemoteDevices:(id)arg1 startTime:(double)arg2 includeLocal:(bool)arg3 pipeline:(id /* block */)arg4;
- (id)remoteDevices;
- (id)source;

@end
