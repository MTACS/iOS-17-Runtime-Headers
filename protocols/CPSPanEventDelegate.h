
@protocol CPSPanEventDelegate <NSObject>

@required

- (void)panBeganWithDirection:(long long)arg1;
- (void)panEndedWithDirection:(long long)arg1;
- (void)panWithDirection:(long long)arg1;

@end
