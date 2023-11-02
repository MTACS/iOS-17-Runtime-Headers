
@interface PKAccountExportedTransactionInfo : NSObject <NSSecureCoding> {
    PKAccountStatementMetadata * _statementMetadata;
    NSData * _transactionData;
    NSString * _transactionDataFilename;
    NSString * _transactionDataHash;
}

@property (nonatomic, retain) PKAccountStatementMetadata *statementMetadata;
@property (nonatomic, copy) NSData *transactionData;
@property (nonatomic, copy) NSString *transactionDataFilename;
@property (nonatomic, copy) NSString *transactionDataHash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setStatementMetadata:(id)arg1;
- (void)setTransactionData:(id)arg1;
- (void)setTransactionDataFilename:(id)arg1;
- (void)setTransactionDataHash:(id)arg1;
- (id)statementMetadata;
- (id)transactionData;
- (id)transactionDataFilename;
- (id)transactionDataHash;

@end
