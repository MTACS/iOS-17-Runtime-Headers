
@interface AXUISettingsTouchAccommodationsAllowSwipeGesturesController : AXUISettingsBaseListController {
    NSArray * _minimumDistanceSpecifiers;
    bool  _touchAccommodationsAllowsSwipeGesturesToBypass;
    double  _touchAccommodationsSwipeGestureMinimumDistance;
}

@property (nonatomic, retain) NSArray *minimumDistanceSpecifiers;
@property (nonatomic) bool touchAccommodationsAllowsSwipeGesturesToBypass;
@property (nonatomic) double touchAccommodationsSwipeGestureMinimumDistance;

- (void).cxx_destruct;
- (id)_allowsSwipesToBypass:(id)arg1;
- (id)_minimumDistanceSpecifiers;
- (void)_setAllowsSwipesToBypass:(id)arg1 specifier:(id)arg2;
- (bool)_shouldShowSwipeMinimumDistanceSpecifier;
- (id)_specifierWithName:(id)arg1 minimumDistance:(double)arg2;
- (id)minimumDistanceSpecifiers;
- (void)setMinimumDistanceSpecifiers:(id)arg1;
- (void)setTouchAccommodationsAllowsSwipeGesturesToBypass:(bool)arg1;
- (void)setTouchAccommodationsSwipeGestureMinimumDistance:(double)arg1;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)touchAccommodationsAllowsSwipeGesturesToBypass;
- (double)touchAccommodationsSwipeGestureMinimumDistance;

@end
