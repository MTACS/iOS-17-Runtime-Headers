
@interface NWURLLoaderCache : NSObject {
    NSURLCache * _cache;
    unsigned long long  _cacheStoragePolicy;
    NSURLSessionDataTask * _dataTask;
    NSObject<OS_dispatch_data> * _dataToCache;
    unsigned long long  _maxItemSizeToCache;
    NSURLRequest * _request;
    NSURLResponse * _response;
}

- (void).cxx_destruct;

@end
