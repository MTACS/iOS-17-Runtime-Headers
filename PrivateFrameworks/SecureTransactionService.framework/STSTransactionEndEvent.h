
@interface STSTransactionEndEvent : NSObject {
    bool  _background;
    STSCredential * _credential;
    NSString * _keyIdentifier;
    NSDictionary * _parsedInfo;
    NSString * _readerIdentifier;
    unsigned long long  _status;
    NSString * _transactionIdentifier;
}

@property (nonatomic) bool background;
@property (nonatomic, retain) STSCredential *credential;
@property (nonatomic, retain) NSString *keyIdentifier;
@property (nonatomic, retain) NSDictionary *parsedInfo;
@property (nonatomic, retain) NSString *readerIdentifier;
@property (nonatomic) unsigned long long status;
@property (nonatomic, retain) NSString *transactionIdentifier;

- (void).cxx_destruct;
- (bool)background;
- (id)credential;
- (id)initWithCredential:(id)arg1 andDigitalCarKeyEndEvent:(id)arg2;
- (id)initWithCredential:(id)arg1 andNearFieldEndEvent:(id)arg2;
- (id)keyIdentifier;
- (id)parsedInfo;
- (id)readerIdentifier;
- (void)setBackground:(bool)arg1;
- (void)setCredential:(id)arg1;
- (void)setKeyIdentifier:(id)arg1;
- (void)setParsedInfo:(id)arg1;
- (void)setReaderIdentifier:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (unsigned long long)status;
- (id)transactionIdentifier;

@end
