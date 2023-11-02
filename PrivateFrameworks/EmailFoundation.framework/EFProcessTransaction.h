
@interface EFProcessTransaction : NSObject {
    NSObject<OS_os_transaction> * _transaction;
}

+ (id)transactionWithDescription:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (bool)extend;
- (id)initWithDescription:(id)arg1;
- (void)invalidate;

@end
