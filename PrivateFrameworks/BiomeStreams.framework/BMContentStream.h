
@interface BMContentStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream> {
    BMContentSource * _contentSource;
    BMStoreStream * _storeStream;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)initWithStreamIdentifier:(id)arg1;
- (bool)pruneEventsWithError:(id*)arg1 predicateBlock:(id /* block */)arg2;
- (void)pruneWithPredicateBlock:(id /* block */)arg1;
- (id)publisher;
- (id)publisherFromStartTime:(double)arg1;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(bool)arg5;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(bool)arg4;
- (id)source;

@end
