
@protocol PVEffectLoadDelegate <NSObject>

@required

- (void)effectDidLoad:(PVEffect *)arg1 isReady:(bool)arg2;
- (void)effectDidUnload:(PVEffect *)arg1;

@end
