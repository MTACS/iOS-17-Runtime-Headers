
@interface BWSimpleCache : NSObject {
    NSMutableDictionary * _cache;
    struct OpaqueFigSimpleMutex { } * _propertyMutex;
}

+ (void)initialize;

- (void)cacheObject:(id)arg1 forKey:(id)arg2;
- (id)copyAndClearObjectForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end
