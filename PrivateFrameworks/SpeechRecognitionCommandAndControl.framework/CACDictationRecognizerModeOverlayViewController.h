
@interface CACDictationRecognizerModeOverlayViewController : UIViewController <CACViewController>

@property (nonatomic, readonly) bool isOverlay;
@property (nonatomic, readonly) long long zOrder;

- (bool)_canShowWhileLocked;
- (bool)isOverlay;
- (void)loadView;
- (void)setDictationRecognizerMode:(int)arg1;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)zOrder;

@end
