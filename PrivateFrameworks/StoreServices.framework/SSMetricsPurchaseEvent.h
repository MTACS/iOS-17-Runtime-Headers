
@interface SSMetricsPurchaseEvent : SSMetricsBaseEvent

@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (nonatomic, retain) NSString *transactionIdentifier;

- (void)addFieldsFromPurchaseResponse:(id)arg1;
- (id)init;
- (double)requestStartTime;
- (double)responseEndTime;
- (double)responseStartTime;
- (void)setRequestStartTime:(double)arg1;
- (void)setResponseEndTime:(double)arg1;
- (void)setResponseStartTime:(double)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (id)transactionIdentifier;

@end
