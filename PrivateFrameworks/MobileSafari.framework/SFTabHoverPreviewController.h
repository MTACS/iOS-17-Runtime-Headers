
@interface SFTabHoverPreviewController : NSObject {
    <SFTabHoverPreviewControllerDelegate> * _delegate;
    BSAbsoluteMachTimer * _disableHoverTimer;
    bool  _enabled;
    UIHoverGestureRecognizer * _hoverRecognizer;
    <SFTabHoverPreviewItem> * _itemPendingPreview;
    <SFTabHoverPreviewItem> * _itemShowingPreview;
    double  _lastTimeHoverPreviewWasDismissed;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pendingHoverLocation;
    BSAbsoluteMachTimer * _tabHoverPreviewShowTimer;
}

@property <SFTabHoverPreviewControllerDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) UIHoverGestureRecognizer *hoverRecognizer;

- (void).cxx_destruct;
- (void)_cancelOrCloseHoverPreviewWithGracePeriod:(bool)arg1;
- (void)_showHoverPreviewForItem:(id)arg1;
- (void)_temporarilyDisableHover;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (id)hoverRecognizer;
- (id)init;
- (bool)isEnabled;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHoverRecognizer:(id)arg1;
- (void)setNeedsSnapshotUpdate;
- (void)updateWithItem:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2;

@end
