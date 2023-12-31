
@interface PUSlideshowViewControllerSpecChange : PUViewControllerSpecChange {
    bool  _chromeVisibilityChanged;
    bool  _shouldObserveAirplayRouteChanged;
    bool  _shouldShowAirplayButtonChanged;
    bool  _shouldShowChromeBarsChanged;
    bool  _shouldShowPlaceholderChanged;
}

@property (nonatomic, readonly) bool chromeVisibilityChanged;
@property (setter=_setShouldObserveAirplayRouteChanged:, nonatomic) bool shouldObserveAirplayRouteChanged;
@property (setter=_setShouldShowAirplayButtonChanged:, nonatomic) bool shouldShowAirplayButtonChanged;
@property (setter=_setShouldShowChromeBarsChanged:, nonatomic) bool shouldShowChromeBarsChanged;
@property (setter=_setShouldShowPlaceholderChanged:, nonatomic) bool shouldShowPlaceholderChanged;

- (void)_setShouldObserveAirplayRouteChanged:(bool)arg1;
- (void)_setShouldShowAirplayButtonChanged:(bool)arg1;
- (void)_setShouldShowChromeBarsChanged:(bool)arg1;
- (void)_setShouldShowPlaceholderChanged:(bool)arg1;
- (bool)changed;
- (bool)chromeVisibilityChanged;
- (bool)shouldObserveAirplayRouteChanged;
- (bool)shouldShowAirplayButtonChanged;
- (bool)shouldShowChromeBarsChanged;
- (bool)shouldShowPlaceholderChanged;

@end
