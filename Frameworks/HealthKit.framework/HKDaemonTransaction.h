
@interface HKDaemonTransaction : NSObject {
    NSString * _name;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly, copy) NSString *name;

+ (id)transactionWithName:(id)arg1;
+ (id)transactionWithOwner:(id)arg1;
+ (id)transactionWithOwner:(id)arg1 activityName:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithName:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)name;

@end
