
@interface NSURLCacheInternal : NSObject {
    void * _cacheRef;
    unsigned long long  diskCapacity;
    unsigned long long  memoryCapacity;
}

- (void)dealloc;

@end
