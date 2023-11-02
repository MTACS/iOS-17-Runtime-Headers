
@interface HKCVKernelCache : NSObject {
    NSMutableDictionary * _cache;
}

@property (nonatomic, readonly) NSMutableDictionary *cache;

- (id)cache;
- (void)dealloc;
- (id)init;

@end
