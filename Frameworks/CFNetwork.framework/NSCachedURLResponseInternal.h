
@interface NSCachedURLResponseInternal : NSObject {
    struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __CFCachedURLResponse {} *x2; } * _cachedURLResponse;
    NSData * data;
    NSURLResponse * response;
    unsigned long long  storagePolicy;
    NSDictionary * userInfo;
}

- (void)dealloc;

@end
