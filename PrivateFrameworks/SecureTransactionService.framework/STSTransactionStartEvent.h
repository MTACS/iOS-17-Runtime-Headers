
@interface STSTransactionStartEvent : NSObject {
    bool  _background;
    STSCredential * _credential;
    NSString * _spIdentifier;
    unsigned short  _transactionMode;
}

@property (nonatomic) bool background;
@property (nonatomic, retain) STSCredential *credential;
@property (nonatomic, retain) NSString *spIdentifier;
@property (nonatomic) unsigned short transactionMode;

- (void).cxx_destruct;
- (bool)background;
- (id)credential;
- (id)initWithCredential:(id)arg1 andDigitalCarKeyStartEvent:(id)arg2;
- (id)initWithCredential:(id)arg1 andNearFieldStartEvent:(id)arg2;
- (void)setBackground:(bool)arg1;
- (void)setCredential:(id)arg1;
- (void)setSpIdentifier:(id)arg1;
- (void)setTransactionMode:(unsigned short)arg1;
- (id)spIdentifier;
- (unsigned short)transactionMode;

@end
