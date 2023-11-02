
@interface NPKOSTransaction : NSObject {
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSString * _name;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly, copy) NSString *name;

+ (id)transactionWithName:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithName:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)name;

@end
