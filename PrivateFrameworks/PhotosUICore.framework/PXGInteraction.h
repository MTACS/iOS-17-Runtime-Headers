
@interface PXGInteraction : NSObject {
    PXGLayout * _layout;
    PXScrollViewController * _scrollViewController;
    UIView<PXGHitTestEnvironment> * _view;
}

@property (nonatomic) PXGLayout *layout;
@property (nonatomic) PXScrollViewController *scrollViewController;
@property (nonatomic) UIView<PXGHitTestEnvironment> *view;

- (void).cxx_destruct;
- (id)layout;
- (void)layoutDidChange;
- (id)scrollViewController;
- (void)scrollViewControllerDidChange;
- (void)setLayout:(id)arg1;
- (void)setScrollViewController:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)viewDidChange;
- (void)viewWillChange;

@end
