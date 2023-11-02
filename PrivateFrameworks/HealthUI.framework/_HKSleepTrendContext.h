
@interface _HKSleepTrendContext : HKOverlayRoomTrendContext {
    HKDisplayType * _baseDisplayType;
    <HKOverlaySleepRoomContextChangeDelegate> * _contextChangeDelegate;
}

@property (nonatomic, readonly) HKDisplayType *baseDisplayType;
@property (nonatomic) <HKOverlaySleepRoomContextChangeDelegate> *contextChangeDelegate;

- (void).cxx_destruct;
- (id)baseDisplayType;
- (id)baseDisplayTypeForOverlay:(long long)arg1;
- (id)contextChangeDelegate;
- (id)initWithBaseDisplayType:(id)arg1 trendModel:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 overlayMode:(long long)arg5 contextChangeDelegate:(id)arg6;
- (void)overlayStateWillChange:(bool)arg1 contextItem:(id)arg2 chartController:(id)arg3;
- (void)setContextChangeDelegate:(id)arg1;
- (bool)unselectedContextShouldUseContextBaseType;

@end
