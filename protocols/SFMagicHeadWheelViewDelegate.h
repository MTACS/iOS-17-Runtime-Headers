
@protocol SFMagicHeadWheelViewDelegate

@required

- (void)magicHeadChangedFacingDegree:(double)arg1;
- (void)magicHeadChangedSelectionToNode:(SFAirDropNode *)arg1;
- (void)magicHeadDidFinishTransferForNode:(SFAirDropNode *)arg1;
- (void)magicHeadDidStartTransferForNode:(SFAirDropNode *)arg1;
- (void)magicHeadDidTerminateTransferForNode:(SFAirDropNode *)arg1;
- (void)magicHeadSelectedHeadRequestingDisabledState:(bool)arg1;
- (void)magicHeadSelectedHeadRequestingSubtitleTextChangeForState:(long long)arg1;
- (void)magicHeadSelectedNodeTapped:(SFAirDropNode *)arg1;

@end
