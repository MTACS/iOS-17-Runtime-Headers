
@interface PKExpressTransactionBannerHandleState : PKBannerHandleState <NSSecureCoding> {
    PKExpressTransactionState * _transactionState;
}

@property (nonatomic, readonly) PKExpressTransactionState *transactionState;

+ (id)createForTransactionState:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)transactionState;

@end
