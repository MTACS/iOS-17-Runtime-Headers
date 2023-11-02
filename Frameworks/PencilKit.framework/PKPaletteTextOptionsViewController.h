
@interface PKPaletteTextOptionsViewController : UIViewController {
    <PKPaletteTextOptionsViewControllerDelegate> * _delegate;
}

@property (nonatomic) <PKPaletteTextOptionsViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_signatureButtonTouchUpInsideHandler:(id)arg1;
- (void)_textButtonTouchUpInsideHandler:(id)arg1;
- (id)delegate;
- (void)loadView;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setDelegate:(id)arg1;

@end
