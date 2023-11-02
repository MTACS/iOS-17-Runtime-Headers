
@interface DATransaction : NSObject {
    NSString * _label;
    NSObject<OS_os_transaction> * _transaction;
    NSString * _transactionId;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *transactionId;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithLabel:(id)arg1;
- (id)label;
- (id)transactionId;

@end
