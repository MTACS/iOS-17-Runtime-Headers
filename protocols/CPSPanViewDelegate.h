
@protocol CPSPanViewDelegate <NSObject>

@required

- (void)panView:(CPSPanView *)arg1 panBeganWithDirection:(long long)arg2;
- (void)panView:(CPSPanView *)arg1 panEndedWithDirection:(long long)arg2;
- (void)panView:(CPSPanView *)arg1 panWithDirection:(long long)arg2;

@end
