
@protocol CKFullScreenEffectManagerDelegate <NSObject>

@required

- (void)effectManager:(CKFullScreenEffectManager *)arg1 didStartEffect:(CKFullScreenEffect *)arg2;
- (void)effectManager:(CKFullScreenEffectManager *)arg1 didStopEffect:(CKFullScreenEffect *)arg2;

@end
