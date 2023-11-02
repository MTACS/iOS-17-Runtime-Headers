
@interface MKAPIServerDaemon : MKAPIServer {
    MKPowerAssertion * _power;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
