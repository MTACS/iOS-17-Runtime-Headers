
@protocol CACElementNamesOverlayManagerDelegate <CACSimpleContentViewManagerDelegate>

@required

- (bool)isAlwaysShowingElementNamesOverlayManager:(CACElementNamesOverlayManager *)arg1;
- (bool)isOverlayFadingEnabledForElementNamesOverlayManager:(CACElementNamesOverlayManager *)arg1;
- (double)overlayFadeDelayForElementNamesOverlayManager:(CACElementNamesOverlayManager *)arg1;
- (float)overlayFadeOpacityForElementNamesOverlayManager:(CACElementNamesOverlayManager *)arg1;

@end
