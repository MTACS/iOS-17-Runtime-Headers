
@interface NRNewsDaemonBloomFilterInfoService : NSObject <NRBloomFilterInfoService> {
    NTPBBloomFilterInfo * _bloomFilterInfo;
    FCAsyncOnceOperation * _fetchOnceOperation;
}

@property (nonatomic, copy) NTPBBloomFilterInfo *bloomFilterInfo;
@property (nonatomic, readonly) FCAsyncOnceOperation *fetchOnceOperation;

- (void).cxx_destruct;
- (void)_fetchBloomFilterInfoWithCompletion:(id /* block */)arg1;
- (id)bloomFilterInfo;
- (id)fetchOnceOperation;
- (void)fetchWebURLBloomFilterInfoWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)setBloomFilterInfo:(id)arg1;

@end
