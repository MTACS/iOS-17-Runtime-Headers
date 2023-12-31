
@interface _UIReusePool : NSObject {
    unsigned long long  _purgePolicy;
    NSMutableSet * _reuseSet;
    NSObject<OS_dispatch_queue> * _reuseSetAccessQueue;
}

@property (nonatomic, readonly) unsigned long long purgePolicy;

+ (void)__applicationDidEnterBackground:(id)arg1;
+ (void)__applicationWillEnterForeground:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)drainPool;
- (id)init;
- (id)initWithPolicy:(unsigned long long)arg1;
- (unsigned long long)purgePolicy;
- (id)reusableObject;

@end
