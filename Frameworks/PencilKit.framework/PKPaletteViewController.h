
@interface PKPaletteViewController : UIViewController {
    <PKPaletteViewControllerDelegate> * _delegate;
    PKPaletteHostView * _hostView;
    PKDrawingPaletteView * _paletteView;
}

@property (nonatomic) <PKPaletteViewControllerDelegate> *delegate;
@property (nonatomic, readonly) PKPaletteHostView *paletteHostView;
@property (nonatomic, readonly) PKDrawingPaletteView *paletteView;

- (void).cxx_destruct;
- (id)delegate;
- (id)paletteHostView;
- (id)paletteView;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
