
@protocol ProximityReader.TapUI

@required

- (void)closeUI;
- (void)closeUIImmediate;
- (void)requiresCardPIN:(_TtC15ProximityReader16PINConfiguration *)arg1;
- (void)updateWithTransactionEvent:(long long)arg1;
- (void)vasReadSuccessWithMerchantNames:(NSArray *)arg1;

@end
