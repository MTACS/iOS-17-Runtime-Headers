
@interface BBAssertion : NSObject {
    <BBAssertionDelegate> * _delegate;
    NSString * _identifier;
    unsigned long long  _transactionID;
}

@property (nonatomic) <BBAssertionDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)identifier;
- (void)increaseOrIgnoreTransactionID:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1 identifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (unsigned long long)transactionID;

@end
