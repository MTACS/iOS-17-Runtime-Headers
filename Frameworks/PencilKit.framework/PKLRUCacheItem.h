
@interface PKLRUCacheItem : NSObject {
    unsigned long long  _cost;
    NSObject<NSCopying> * _key;
    PKLRUCacheItem * _next;
    id  _object;
    PKLRUCacheItem * _prev;
    long long  _scaleFactor;
}

- (void).cxx_destruct;

@end
