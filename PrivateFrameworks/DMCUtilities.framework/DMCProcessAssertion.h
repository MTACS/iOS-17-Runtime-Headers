
@interface DMCProcessAssertion : NSObject {
    NSString * _reason;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) NSString *reason;

- (void).cxx_destruct;
- (void)_createAssertion;
- (void)_releaseAssertion;
- (void)dealloc;
- (id)initWithReason:(id)arg1;
- (id)reason;

@end
