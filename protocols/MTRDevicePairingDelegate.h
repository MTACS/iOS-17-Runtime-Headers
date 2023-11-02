
@protocol MTRDevicePairingDelegate <NSObject>

@optional

- (void)onCommissioningComplete:(NSError *)arg1;
- (void)onPairingComplete:(NSError *)arg1;
- (void)onPairingDeleted:(NSError *)arg1;
- (void)onStatusUpdate:(unsigned long long)arg1;

@end
