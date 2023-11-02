
@interface ATXCacheReaderGuardedData : NSObject {
    int  _cacheFileDescriptor;
    NSString * _cachePath;
}

- (void).cxx_destruct;
- (id)init;

@end
