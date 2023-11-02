
@interface CACLabeledElementsOverlayViewController : UIViewController <CACViewController>

@property (nonatomic, readonly) bool isOverlay;
@property (nonatomic, readonly) long long zOrder;

- (bool)_canShowWhileLocked;
- (bool)isOverlay;
- (void)loadView;
- (void)setLabeledElements:(id)arg1;
- (long long)zOrder;

@end
