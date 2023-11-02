
@interface CPSDashboardPrimaryManeuverView : CPSPrimaryManeuverView

+ (id)instructionsForManeuver:(id)arg1;
+ (id)junctionImageForManeuver:(id)arg1;
+ (id)symbolImageForManeuver:(id)arg1;

- (bool)centersManeuverInView;
- (bool)fitJunctionViewToHeight;
- (bool)hasJunctionImageBackground;
- (id)junctionBackgroundColor;
- (double)symbolImageHeight;

@end
