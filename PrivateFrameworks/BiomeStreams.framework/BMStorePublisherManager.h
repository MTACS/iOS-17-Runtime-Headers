
@interface BMStorePublisherManager : NSObject {
    BMAccessClient * _accessClient;
    BMStoreConfig * _config;
    Class  _eventDataClass;
    _PASLock * _protectedState;
    NSString * _streamIdentifier;
    NSString * _useCase;
}

- (void).cxx_destruct;
- (id)_openStreamReaderWithAccount:(id)arg1 storeLocation:(long long)arg2 remoteStreamName:(id)arg3 eventDataClass:(Class)arg4;
- (id)_openStreamReaderWithStoreLocation:(long long)arg1 remoteStreamName:(id)arg2 eventDataClass:(Class)arg3;
- (id)_publisherWithAccount:(id)arg1 storeLocation:(long long)arg2 remoteStreamName:(id)arg3;
- (id)_publisherWithStoreLocation:(long long)arg1 remoteStreamName:(id)arg2;
- (id)_publishersForAccount:(id)arg1 remoteDevices:(id)arg2 includeLocal:(bool)arg3;
- (id)_publishersForAccounts:(id)arg1 devices:(id)arg2 deviceTypes:(unsigned int)arg3 withUseCase:(id)arg4 startTime:(id)arg5 endTime:(id)arg6 maxEvents:(id)arg7 lastN:(id)arg8 reversed:(bool)arg9 includeLocal:(bool)arg10 pipeline:(id /* block */)arg11;
- (id)_publishersForRemoteDevices:(id)arg1 includeLocal:(bool)arg2;
- (id)_publishersForRemoteDevices:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 maxEvents:(id)arg4 lastN:(id)arg5 reversed:(bool)arg6 includeLocal:(bool)arg7 pipeline:(id /* block */)arg8;
- (id)_streamReaderWithStoreLocation:(long long)arg1 remoteStreamName:(id)arg2;
- (id)initWithStreamIdentifier:(id)arg1 streamConfig:(id)arg2 accessClient:(id)arg3;
- (id)initWithStreamIdentifier:(id)arg1 streamConfig:(id)arg2 accessClient:(id)arg3 eventDataClass:(Class)arg4 useCase:(id)arg5;
- (id)publisher;
- (id)publisherFromStartTime:(double)arg1;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(bool)arg5;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(bool)arg4;
- (id)publisherWithStartTime:(id)arg1 withEndTime:(id)arg2 withMaxEvents:(id)arg3 reversed:(bool)arg4;
- (id)publishersForAccounts:(id)arg1 devices:(id)arg2 deviceTypes:(unsigned int)arg3 withUseCase:(id)arg4 startTime:(id)arg5 endTime:(id)arg6 maxEvents:(id)arg7 lastN:(id)arg8 reversed:(bool)arg9 includeLocal:(bool)arg10 pipeline:(id /* block */)arg11;
- (id)publishersForDevices:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 maxEvents:(id)arg4 lastN:(id)arg5 reversed:(bool)arg6 includeLocal:(bool)arg7 pipeline:(id /* block */)arg8;
- (id)publishersForDevices:(id)arg1 startTime:(double)arg2 includeLocal:(bool)arg3 pipeline:(id /* block */)arg4;
- (id)publishersForRemoteDevices:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 maxEvents:(id)arg4 lastN:(id)arg5 reversed:(bool)arg6 includeLocal:(bool)arg7 pipeline:(id /* block */)arg8;
- (id)publishersForRemoteDevices:(id)arg1 startTime:(double)arg2 includeLocal:(bool)arg3 pipeline:(id /* block */)arg4;

@end
