
@interface AMSKeepAlive : NSObject {
    NSString * _logKey;
    NSString * _name;
    AMSRBSKeepAlive * _rbsKeepAlive;
    long long  _style;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long style;

+ (void)_accessAssertionCache:(id /* block */)arg1;
+ (void)_handleAssertionExpiration;
+ (bool)_isRBSAssertionsEnabled;
+ (id)keepAliveWithFormat:(id)arg1;
+ (id)keepAliveWithName:(id)arg1;
+ (id)keepAliveWithName:(id)arg1 style:(long long)arg2;
+ (void)keepAliveWithName:(id)arg1 style:(long long)arg2 block:(id /* block */)arg3;
+ (id)rbs_keepAliveWithName:(id)arg1;
+ (id)rbs_keepAliveWithName:(id)arg1 style:(long long)arg2;
+ (void)rbs_keepAliveWithName:(id)arg1 style:(long long)arg2 block:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_assertionName;
- (id)_cacheKey;
- (void)_removeOSTransaction;
- (void)_removeProcessAssertion;
- (void)_startLogTimer;
- (void)_takeOSTransaction;
- (void)_takeProcessAssertion;
- (void)dealloc;
- (id)initRBSWithName:(id)arg1;
- (id)initRBSWithName:(id)arg1 style:(long long)arg2;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 style:(long long)arg2;
- (void)invalidate;
- (id)name;
- (void)rbs_invalidate;
- (long long)style;

@end
