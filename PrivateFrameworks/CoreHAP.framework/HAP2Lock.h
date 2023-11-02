
@interface HAP2Lock : HAP2LoggingObject {
    <NSLocking> * _internalLock;
    _Atomic unsigned long long  _lockCount;
}

@property (nonatomic, readonly) <NSLocking> *internalLock;
@property (nonatomic, readonly) NSString *name;

+ (id)lockWithName:(id)arg1;
+ (id)new;

- (void).cxx_destruct;
- (void)_performBlock:(id /* block */)arg1 allowRecursive:(bool)arg2;
- (void)assertOwner;
- (id)init;
- (id)initWithLock:(id)arg1 name:(id)arg2;
- (id)internalLock;
- (id)name;
- (void)performBlock:(id /* block */)arg1;

@end
