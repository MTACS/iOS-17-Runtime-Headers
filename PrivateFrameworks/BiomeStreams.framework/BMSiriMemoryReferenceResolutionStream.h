
@interface BMSiriMemoryReferenceResolutionStream : NSObject <BMSourceStream, BMSyncableStream, BMTimeBasedPublisherStream> {
    BMRestrictedStream * _stream;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)publisher;
- (id)publisherFromStartTime:(double)arg1;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(bool)arg5;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(bool)arg4;
- (id)publishersForDevices:(id)arg1 startTime:(double)arg2 includeLocal:(bool)arg3 pipeline:(id /* block */)arg4;
- (id)source;

@end
