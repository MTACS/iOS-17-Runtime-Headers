
@interface AVAssetResourceLoadingDataRequest : NSObject {
    AVAssetResourceLoadingDataRequestInternal * _dataRequest;
}

@property (nonatomic, readonly) long long currentOffset;
@property (nonatomic, readonly) long long requestedLength;
@property (nonatomic, readonly) long long requestedOffset;
@property (nonatomic, readonly) bool requestsAllDataToEndOfResource;

- (id)_loadingRequest;
- (struct __CFDictionary { }*)_requestInfo;
- (long long)currentOffset;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithLoadingRequest:(id)arg1 requestedOffset:(long long)arg2 requestedLength:(long long)arg3 requestsAllDataToEndOfResource:(bool)arg4 canSupplyIncrementalDataImmediately:(bool)arg5;
- (long long)requestedLength;
- (long long)requestedOffset;
- (bool)requestsAllDataToEndOfResource;
- (void)respondWithData:(id)arg1;

@end
