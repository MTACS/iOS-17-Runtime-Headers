
@interface CACElementNamesOverlayViewController : UIViewController <CACViewController>

@property (nonatomic, readonly) bool isOverlay;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, readonly) long long zOrder;

- (bool)_canShowWhileLocked;
- (bool)isOverlay;
- (id)items;
- (void)loadView;
- (void)setItems:(id)arg1;
- (long long)zOrder;

@end
