
@protocol SBBrightnessRouteCoordinating <NSObject>

@required

- (void)brightnessController:(id <SBBrightnessRouteControlling>)arg1 performCoordinatedBrightnessChangeForIncrementKeyDown:(bool)arg2 decrementKeyDown:(bool)arg3;

@end
