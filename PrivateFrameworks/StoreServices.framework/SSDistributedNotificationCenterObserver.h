
@interface SSDistributedNotificationCenterObserver : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _name;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) NSString *name;

- (id /* block */)block;
- (void)dealloc;
- (id)dispatchQueue;
- (id)initWithName:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (id)name;

@end
