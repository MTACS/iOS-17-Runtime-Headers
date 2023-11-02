
@interface RMSharedLock : NSObject {
    NSConditionLock * _lock;
    NSString * _lockTitle;
}

@property (nonatomic, copy) NSString *lockTitle;

+ (id)newSharedLockWithDescription:(id)arg1;

- (void).cxx_destruct;
- (id)initWithDescription:(id)arg1;
- (void)lock;
- (id)lockTitle;
- (void)performBlockUnderLock:(id /* block */)arg1;
- (void)setLockTitle:(id)arg1;
- (void)unlock;

@end
