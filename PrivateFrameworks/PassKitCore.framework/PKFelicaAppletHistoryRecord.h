
@interface PKFelicaAppletHistoryRecord : PKTransitAppletHistoryRecord <NSCopying> {
    NSNumber * _amountType;
    NSNumber * _sectorCombination;
    NSString * _transactionID;
    NSNumber * _transactionType;
}

@property (nonatomic, copy) NSNumber *amountType;
@property (nonatomic, copy) NSNumber *sectorCombination;
@property (nonatomic, copy) NSString *transactionID;
@property (nonatomic, copy) NSNumber *transactionType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amountType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)sectorCombination;
- (void)setAmountType:(id)arg1;
- (void)setSectorCombination:(id)arg1;
- (void)setTransactionID:(id)arg1;
- (void)setTransactionType:(id)arg1;
- (id)transactionID;
- (id)transactionType;

@end
