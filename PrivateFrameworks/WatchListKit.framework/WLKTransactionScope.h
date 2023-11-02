
@interface WLKTransactionScope : NSObject {
    double  _delay;
    NSString * _identifier;
    NSObject<OS_os_transaction> * _transaction;
}

@property (readonly) double delay;
@property (readonly, copy) NSString *identifier;
@property (readonly) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (void)dealloc;
- (double)delay;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 delay:(double)arg2;
- (id)transaction;

@end
