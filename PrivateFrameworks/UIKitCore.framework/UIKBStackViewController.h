
@interface UIKBStackViewController : UIViewController

@property (nonatomic, readonly) UIStackView *stackView;

- (void)addChildViewController:(id)arg1;
- (void)loadView;
- (void)removeChildViewController:(id)arg1;
- (id)stackView;

@end
