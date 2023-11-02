
@interface _CNOSTransactionInhibitor : CNInhibitor {
    NSString * _label;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (id)initWithLabel:(id)arg1;
- (id)label;
- (void)start;
- (void)stop;
- (id)transaction;

@end
