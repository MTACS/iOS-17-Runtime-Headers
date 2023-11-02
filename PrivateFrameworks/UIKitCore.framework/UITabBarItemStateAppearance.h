
@interface UITabBarItemStateAppearance : NSObject {
    _UITabBarItemData * _data;
    NSArray * _itemEffects;
    UITabBarItemAppearance * _owner;
    long long  _state;
}

@property (setter=_setData:, nonatomic, retain) _UITabBarItemData *_data;
@property (nonatomic, copy) UIColor *badgeBackgroundColor;
@property (nonatomic) struct UIOffset { double x1; double x2; } badgePositionAdjustment;
@property (nonatomic, copy) NSDictionary *badgeTextAttributes;
@property (nonatomic) struct UIOffset { double x1; double x2; } badgeTitlePositionAdjustment;
@property (nonatomic, copy) UIColor *iconColor;
@property (nonatomic, copy) NSArray *itemEffects;
@property (nonatomic) struct UIOffset { double x1; double x2; } titlePositionAdjustment;
@property (nonatomic, copy) NSDictionary *titleTextAttributes;

- (void).cxx_destruct;
- (void)_clearOwner;
- (id)_data;
- (id)_initWithOwner:(id)arg1 data:(id)arg2 state:(long long)arg3;
- (void)_setData:(id)arg1;
- (void)_writeToStorage:(id /* block */)arg1;
- (id)badgeBackgroundColor;
- (struct UIOffset { double x1; double x2; })badgePositionAdjustment;
- (id)badgeTextAttributes;
- (struct UIOffset { double x1; double x2; })badgeTitlePositionAdjustment;
- (id)iconColor;
- (id)init;
- (id)itemEffects;
- (void)setBadgeBackgroundColor:(id)arg1;
- (void)setBadgePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)setBadgeTextAttributes:(id)arg1;
- (void)setBadgeTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)setIconColor:(id)arg1;
- (void)setItemEffects:(id)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)setTitleTextAttributes:(id)arg1;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustment;
- (id)titleTextAttributes;

@end
