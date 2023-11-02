
@interface SBHScrollableZoomingIconViewInteraction : SBHScrollableIconViewInteraction {
    bool  _considersFolderIconTargets;
}

@property (nonatomic) bool considersFolderIconTargets;

- (double)_clippingFudgeInset;
- (bool)considersFolderIconTargets;
- (void)handleTargetIconViewClipped:(id)arg1;
- (bool)isIconViewTheInteractingTargetIconView:(id)arg1;
- (void)setConsidersFolderIconTargets:(bool)arg1;

@end
