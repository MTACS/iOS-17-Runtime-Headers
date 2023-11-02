
@interface WDTransaction : NSObject {
    NSString * _identifier;
    NSObject<OS_os_transaction> * _transaction;
    NSString * _transactionDescription;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSObject<OS_os_transaction> *transaction;
@property (nonatomic, readonly) NSString *transactionDescription;

+ (id)log;

- (void).cxx_destruct;
- (void)dealloc;
- (id)identifier;
- (id)initWithDescription:(id)arg1;
- (id)transaction;
- (id)transactionDescription;

@end
