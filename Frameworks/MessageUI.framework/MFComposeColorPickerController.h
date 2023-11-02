
@interface MFComposeColorPickerController : UIViewController <PKColorPickerDelegate> {
    PKColorPicker * _colorPicker;
    <MFComposeColorPickerControllerDelegate> * _delegate;
    UIColor * _selectedColor;
    bool  _shouldShowTitleBar;
}

@property (nonatomic, retain) PKColorPicker *colorPicker;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFComposeColorPickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *selectedColor;
@property (nonatomic) bool shouldShowTitleBar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)closeColorPicker:(id)arg1;
- (id)colorPicker;
- (void)colorPickerDidChangeSelectedColor:(id)arg1;
- (id)delegate;
- (id)initWithSelectedColor:(id)arg1 shouldShowTitleBar:(bool)arg2;
- (void)loadView;
- (id)selectedColor;
- (void)setColorPicker:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setShouldShowTitleBar:(bool)arg1;
- (bool)shouldShowTitleBar;
- (void)viewDidLoad;

@end
