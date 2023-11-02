
@interface BMDKEventStream : NSObject <BMSourceStream, BMStreamDeleting, BMTimeBasedPublisherStream> {
    NSString * _identifier;
    BMStoreStream * _storeStream;
}

@property (nonatomic, readonly) NSString *identifier;

+ (id)streamNameFromDKStreamName:(id)arg1;

- (void).cxx_destruct;
- (void)deleteEventsWithPredicate:(id /* block */)arg1;
- (void)deleteLocalAndRemoteEventsWithPredicateBlock:(id /* block */)arg1;
- (void)deleteLocalAndRemoteEventsWithReason:(unsigned long long)arg1 usingPredicateBlock:(id /* block */)arg2;
- (id)identifier;
- (id)init;
- (id)initWithDKStreamIdentifier:(id)arg1 contentProtection:(id)arg2;
- (id)initWithStreamIdentifier:(id)arg1 contentProtection:(id)arg2;
- (bool)pruneEventsWithError:(id*)arg1 predicateBlock:(id /* block */)arg2;
- (void)pruneWithPredicateBlock:(id /* block */)arg1;
- (id)publisher;
- (id)publisherFromStartTime:(double)arg1;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(bool)arg5;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(bool)arg4;
- (id)source;

@end
