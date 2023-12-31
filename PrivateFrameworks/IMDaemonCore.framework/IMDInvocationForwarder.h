
@interface IMDInvocationForwarder : NSObject {
    NSLock * _lock;
    NSMutableArray * _targets;
}

@property (nonatomic, retain) NSLock *_lock;
@property (nonatomic, retain) NSMutableArray *_targets;

- (id)_lock;
- (id)_targets;
- (void)addTarget:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTargets:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeTarget:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)set_lock:(id)arg1;
- (void)set_targets:(id)arg1;

@end
