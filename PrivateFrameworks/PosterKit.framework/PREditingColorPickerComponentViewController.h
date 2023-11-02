
@interface PREditingColorPickerComponentViewController : UIViewController <PREditingColorItemsViewControllerDelegate> {
    PREditorColorPickerConfiguration * _configuration;
    double  _contentsLuminance;
    <PREditingColorPickerComponentViewControllerDelegate> * _delegate;
    bool  _forFontPicker;
    PREditingColorItemsViewController * _itemsViewController;
    UIColor * _selectedColor;
    bool  _showsHeader;
    PREditingColorSlider * _sliderView;
    PREditingColorVariationStore * _variationStore;
    UIStackView * _verticalStack;
}

@property (nonatomic, retain) PREditorColorPickerConfiguration *configuration;
@property (nonatomic) double contentsLuminance;
@property (nonatomic) <PREditingColorPickerComponentViewControllerDelegate> *delegate;
@property (nonatomic) bool forFontPicker;
@property (nonatomic, retain) PREditingColorItemsViewController *itemsViewController;
@property (nonatomic, retain) UIColor *selectedColor;
@property (nonatomic) bool showsHeader;
@property (nonatomic, retain) PREditingColorSlider *sliderView;
@property (nonatomic, retain) PREditingColorVariationStore *variationStore;
@property (nonatomic, retain) UIStackView *verticalStack;

- (void).cxx_destruct;
- (void)colorItemsViewController:(id)arg1 didSelectColorItem:(id)arg2;
- (void)colorItemsViewController:(id)arg1 didTapToResetColorItem:(id)arg2;
- (void)colorItemsViewControllerDidUpdateEstimatedSize:(id)arg1;
- (void)colorSliderDidUpdateColor:(id)arg1;
- (id)configuration;
- (double)contentsLuminance;
- (id)delegate;
- (void)didSelectColorItem:(id)arg1;
- (double)estimatedHeight;
- (bool)forFontPicker;
- (id)init;
- (id)initWithConfiguration:(id)arg1 variationStore:(id)arg2;
- (id)itemsViewController;
- (void)loadItemsViewControllerIfNeeded;
- (void)loadView;
- (id)selectedColor;
- (void)setConfiguration:(id)arg1;
- (void)setContentsLuminance:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForFontPicker:(bool)arg1;
- (void)setItemsViewController:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setShowsHeader:(bool)arg1;
- (void)setSliderView:(id)arg1;
- (void)setVariationStore:(id)arg1;
- (void)setVerticalStack:(id)arg1;
- (bool)showsHeader;
- (id)sliderView;
- (void)updateForColorWellSelectedItem:(id)arg1;
- (void)updateSliderVisibility:(bool)arg1;
- (id)variationStore;
- (id)verticalStack;

@end
