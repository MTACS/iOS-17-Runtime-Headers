
@protocol _SFBarManagerDelegate <NSObject>

@optional

- (bool)barManager:(_SFBarManager *)arg1 canHandleLongPressForBarItem:(long long)arg2;
- (void)barManager:(_SFBarManager *)arg1 didReceiveLongPressForBarItem:(long long)arg2;
- (void)barManager:(_SFBarManager *)arg1 didReceiveTapForBarItem:(long long)arg2;
- (void)barManager:(_SFBarManager *)arg1 didReceiveTouchDownForBarItem:(long long)arg2;
- (NSSet *)barManager:(_SFBarManager *)arg1 visibleBarItemsForLayout:(long long)arg2 availableItems:(NSSet *)arg3;
- (void)barManager:(_SFBarManager *)arg1 willRegisterBarWithToken:(id <_SFBarRegistrationToken>)arg2;

@end
