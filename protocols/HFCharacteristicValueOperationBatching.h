
@protocol HFCharacteristicValueOperationBatching <NSObject>

@required

- (void)beginTransactionWithReason:(NSString *)arg1 readPolicy:(id <HFCharacteristicReadPolicy>)arg2 logger:(HFUpdateLogger *)arg3;
- (void)commitTransactionWithReason:(NSString *)arg1;

@end
