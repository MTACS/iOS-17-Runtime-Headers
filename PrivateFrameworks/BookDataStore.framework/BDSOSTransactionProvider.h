
@interface BDSOSTransactionProvider : NSObject <BDSOSTransactionProviding> {
    <BDSOSTransactionDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BDSOSTransactionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createTransactionWithName:(const char *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
