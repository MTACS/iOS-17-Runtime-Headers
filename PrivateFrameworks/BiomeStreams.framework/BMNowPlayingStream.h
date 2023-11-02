
@interface BMNowPlayingStream : NSObject <BMSourceStream, BMSyncableStream, BMTimeBasedPublisherStream> {
    BMStoreStream * _storeStream;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)publisher;
- (id)publisherFromStartTime:(double)arg1;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(bool)arg5;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(bool)arg4;
- (id)publishersForRemoteDevices:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 maxEvents:(id)arg4 lastN:(id)arg5 reversed:(bool)arg6 includeLocal:(bool)arg7 pipeline:(id /* block */)arg8;
- (id)publishersForRemoteDevices:(id)arg1 startTime:(double)arg2 includeLocal:(bool)arg3 pipeline:(id /* block */)arg4;
- (id)remoteDevices;
- (id)source;

@end
