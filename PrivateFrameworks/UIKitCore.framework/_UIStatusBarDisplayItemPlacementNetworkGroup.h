
@interface _UIStatusBarDisplayItemPlacementNetworkGroup : _UIStatusBarDisplayItemPlacementGroup {
    _UIStatusBarDisplayItemPlacementCellularGroup * _cellularGroup;
    _UIStatusBarDisplayItemPlacementWifiGroup * _wifiGroup;
}

@property (nonatomic, readonly) _UIStatusBarDisplayItemPlacementCellularGroup *cellularGroup;
@property (nonatomic, readonly) _UIStatusBarDisplayItemPlacementWifiGroup *wifiGroup;

+ (id)_groupWithCellularGroup:(id)arg1 wifiGroup:(id)arg2 includeCellularName:(bool)arg3;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 cellularTypeClass:(Class)arg5 includeCellularName:(bool)arg6 allowDualNetwork:(bool)arg7;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 includeCellularName:(bool)arg5;
+ (id)secondaryGroupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4;

- (void).cxx_destruct;
- (id)cellularGroup;
- (id)wifiGroup;

@end
