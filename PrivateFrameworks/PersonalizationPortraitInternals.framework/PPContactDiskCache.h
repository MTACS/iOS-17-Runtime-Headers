
@interface PPContactDiskCache : NSObject {
    long long  _lastCreatedAt;
    NSString * _path;
}

- (void).cxx_destruct;
- (id)_cacheObjectFromFilePath:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithPath:(id)arg1;
- (bool)isEmpty;
- (bool)iterNameRecordCacheWithError:(id*)arg1 block:(id /* block */)arg2;
- (id)path;

@end
