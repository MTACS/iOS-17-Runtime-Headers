
@protocol CACLabeledElementsOverlayManagerDelegate <CACSimpleContentViewManagerDelegate>

@required

- (void)didAssignNumbersInLabeledElementsOverlayManager:(CACLabeledElementsOverlayManager *)arg1;
- (bool)isAlwaysShowingLabeledElementsOverlayManager:(CACLabeledElementsOverlayManager *)arg1;
- (bool)isHandlingDisambiguationForLabeledElementsOverlayManager:(CACLabeledElementsOverlayManager *)arg1;
- (bool)isOverlayFadingEnabledForLabeledElementsOverlayManager:(CACLabeledElementsOverlayManager *)arg1;
- (NSLocale *)localeForLabeledElementsOverlayManager:(CACLabeledElementsOverlayManager *)arg1;
- (double)overlayFadeDelayForLabeledElementsOverlayManager:(CACLabeledElementsOverlayManager *)arg1;
- (float)overlayFadeOpacityForLabeledElementsOverlayManager:(CACLabeledElementsOverlayManager *)arg1;
- (UIScreen *)screenForLabeledElementsOverlayManager:(CACLabeledElementsOverlayManager *)arg1;
- (bool)shouldAssignNumbersRandomlyInLabeledElementsOverlayManager:(CACLabeledElementsOverlayManager *)arg1;

@end
