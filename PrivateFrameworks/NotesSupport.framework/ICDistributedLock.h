
@interface ICDistributedLock : NSObject {
    bool  hasLock;
    NSString * lockName;
    NSLock * threadLock;
}

@property (readonly, copy) NSDate *lockDate;

+ (id)lockWithPath:(id)arg1;

- (void)breakLock;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPath:(id)arg1;
- (void)invalidate;
- (id)lockDate;
- (bool)tryLock;
- (void)unlock;

@end
