
@interface CACElementNamesOverlayManager : CACSimpleContentViewManager {
    <CACElementNamesOverlayManagerDelegate> * _delegate;
}

@property (nonatomic) <CACElementNamesOverlayManagerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (bool)isOverlay;
- (void)setDelegate:(id)arg1;
- (void)showNamesForElements:(id)arg1;
- (void)startDelayedDimmingOfNumbers;
- (void)stopDelayedDimmingOfNumbers;
- (id)voiceOverDescriptions;

@end
