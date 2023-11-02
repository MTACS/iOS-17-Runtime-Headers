
@interface NSConditionLock : NSObject <NSLocking> {
    NSCondition * cond;
    NSString * n;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * t;
    long long  v;
}

@property (readonly) long long condition;
@property (copy) NSString *name;

- (long long)condition;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithCondition:(long long)arg1;
- (void)lock;
- (bool)lockBeforeDate:(id)arg1;
- (void)lockWhenCondition:(long long)arg1;
- (bool)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (bool)tryLock;
- (bool)tryLockWhenCondition:(long long)arg1;
- (void)unlock;
- (void)unlockWithCondition:(long long)arg1;

@end
