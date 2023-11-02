
@interface PKAccountScheduledTransferList : NSObject <NSSecureCoding> {
    NSMutableArray * _scheduledTransfers;
}

@property (nonatomic, readonly) NSArray *scheduledTransfers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addScheduledTransfer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithScheduledTransfer:(id)arg1;
- (id)jsonArrayRepresentation;
- (id)scheduledTransferOfFundingSourceType:(long long)arg1;
- (id)scheduledTransfers;

@end
