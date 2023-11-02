
@interface HMFUnfairLock : HMFObject <HMFLocking> {
    unsigned long long  _options;
}

@property (readonly) unsigned long long options;

+ (id)lock;
+ (id)lockWithOptions:(unsigned long long)arg1;

- (void)assertNotOwner;
- (void)assertOwner;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)lock;
- (unsigned long long)options;
- (void)performBlock:(id /* block */)arg1;
- (void)unlock;

@end
