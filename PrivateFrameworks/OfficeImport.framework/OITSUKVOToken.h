
@interface OITSUKVOToken : NSObject {
    void * _context;
    NSString * _keyPath;
    NSObject * _observer;
    NSObject * _target;
}

@property (nonatomic, readonly) void*context;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly) NSObject *observer;
@property (nonatomic, readonly) NSObject *target;

- (void*)context;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithObserver:(id)arg1 target:(id)arg2 keyPath:(id)arg3 context:(void*)arg4;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (id)observer;
- (id)target;

@end
