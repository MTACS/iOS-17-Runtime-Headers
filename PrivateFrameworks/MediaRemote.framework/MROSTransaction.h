
@interface MROSTransaction : NSObject {
    NSObject<OS_os_transaction> * _containedTransaction;
    NSString * _transactionName;
}

@property (nonatomic, readonly) NSString *transactionName;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1;
- (void)invalidateTransaction;
- (id)transactionName;

@end
