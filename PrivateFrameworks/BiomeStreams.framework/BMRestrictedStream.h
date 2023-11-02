
@interface BMRestrictedStream : NSObject <BMSourceStream, BMSyncableStream, BMTimeBasedPublisherStream> {
    BMStoreStream * _storeStream;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 eventDataClass:(Class)arg2;
- (id)initWithIdentifier:(id)arg1 segmentSize:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1 segmentSize:(unsigned long long)arg2 pruningPolicy:(id)arg3;
- (id)initWithIdentifier:(id)arg1 segmentSize:(unsigned long long)arg2 pruningPolicy:(id)arg3 eventDataClass:(Class)arg4;
- (void)pruneLocalAndRemoteEventsWithPredicateBlock:(id /* block */)arg1;
- (void)pruneLocalAndRemoteEventsWithReason:(unsigned long long)arg1 usingPredicateBlock:(id /* block */)arg2;
- (void)pruneWithPredicateBlock:(id /* block */)arg1;
- (id)publisherFromStartTime:(double)arg1;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(bool)arg5;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(bool)arg4;
- (id)publishersForDevices:(id)arg1 startTime:(double)arg2 includeLocal:(bool)arg3 pipeline:(id /* block */)arg4;
- (id)publishersForRemoteDevices:(id)arg1 startTime:(double)arg2 includeLocal:(bool)arg3 pipeline:(id /* block */)arg4;
- (id)remoteDevices;
- (id)source;

@end
