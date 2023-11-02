
@interface HKSharedSummaryTransactionBuilderTaskConfiguration : HKTaskConfiguration {
    bool  _allowCommitted;
    NSUUID * _transactionUUID;
}

@property (nonatomic) bool allowCommitted;
@property (nonatomic, copy) NSUUID *transactionUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowCommitted;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAllowCommitted:(bool)arg1;
- (void)setTransactionUUID:(id)arg1;
- (id)transactionUUID;

@end
