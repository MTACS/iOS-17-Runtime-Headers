
@interface ANTransactionInfo : NSObject {
    double  _expiration;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic) double expiration;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;

+ (id)infoWithTransaction:(id)arg1;

- (void).cxx_destruct;
- (double)expiration;
- (void)setExpiration:(double)arg1;
- (void)setTimer:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)timer;
- (id)transaction;

@end
