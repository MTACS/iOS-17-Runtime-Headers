
@interface CNBinarySemaphoreLock : NSObject <NSLocking> {
    NSString * _name;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (copy) NSString *name;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)invalidate;
- (void)lock;
- (id)name;
- (void)setName:(id)arg1;
- (void)unlock;

@end
