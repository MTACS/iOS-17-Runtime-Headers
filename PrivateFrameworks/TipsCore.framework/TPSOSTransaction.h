
@interface TPSOSTransaction : NSObject {
    double  _creationTime;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) double creationTime;
@property (nonatomic, readonly) NSObject<OS_os_transaction> *transaction;

+ (id)transactionWithName:(id)arg1;

- (void).cxx_destruct;
- (double)creationTime;
- (void)dealloc;
- (void)endTransaction;
- (id)initWithTransactionName:(id)arg1;
- (id)transaction;

@end
