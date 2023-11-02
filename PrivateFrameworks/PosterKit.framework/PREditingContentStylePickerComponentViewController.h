
@interface PREditingContentStylePickerComponentViewController : UIViewController <PREditingContentStyleItemsDataSourceDelegate, PREditingContentStyleItemsViewControllerDelegate> {
    PREditingColorWell * _colorWell;
    PREditingColorWellView * _colorWellView;
    PREditorContentStylePickerConfiguration * _configuration;
    double  _contentsLuminance;
    PREditingContentStyleItemsDataSource * _dataSource;
    <PREditingContentStylePickerComponentViewControllerDelegate> * _delegate;
    PREditingContentStyleItemsViewController * _itemsViewController;
    UIColor * _selectedColor;
    bool  _showsHeader;
    PREditingVariationSlider * _sliderView;
    PREditingPosterContentStyleCoordinator * _uiKitColorPickerContentStyleCoordinator;
    UIStackView * _verticalStack;
}

@property (nonatomic, retain) PREditingColorWell *colorWell;
@property (nonatomic, retain) PREditingColorWellView *colorWellView;
@property (nonatomic, retain) PREditorContentStylePickerConfiguration *configuration;
@property (nonatomic) double contentsLuminance;
@property (nonatomic, retain) PREditingContentStyleItemsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PREditingContentStylePickerComponentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PREditingContentStyleItemsViewController *itemsViewController;
@property (nonatomic, retain) UIColor *selectedColor;
@property (nonatomic) bool showsHeader;
@property (nonatomic, retain) PREditingVariationSlider *sliderView;
@property (readonly) Class superclass;
@property (nonatomic, retain) PREditingPosterContentStyleCoordinator *uiKitColorPickerContentStyleCoordinator;
@property (nonatomic, retain) UIStackView *verticalStack;

- (void).cxx_destruct;
- (void)colorSliderDidUpdateVariation:(id)arg1;
- (id)colorWell;
- (void)colorWellDidUpdateColor:(id)arg1;
- (id)colorWellView;
- (id)configuration;
- (void)contentStyleItemsViewController:(id)arg1 didSelectContentStyleCoordinator:(id)arg2;
- (void)contentStyleItemsViewControllerDidUpdateEstimatedSize:(id)arg1;
- (double)contentsLuminance;
- (id)coordinatorForStyle:(id)arg1 isSuggestedStyle:(bool)arg2 fromDataSource:(id)arg3;
- (id)dataSource;
- (id)delegate;
- (void)didSelectContentStyle:(id)arg1;
- (double)estimatedHeight;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)itemsViewController;
- (void)loadItemsViewControllerIfNeeded;
- (void)loadView;
- (id)selectedColor;
- (void)setColorWell:(id)arg1;
- (void)setColorWellView:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContentsLuminance:(double)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItemsViewController:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setShowsHeader:(bool)arg1;
- (void)setSliderView:(id)arg1;
- (void)setUiKitColorPickerContentStyleCoordinator:(id)arg1;
- (void)setVerticalStack:(id)arg1;
- (bool)showsHeader;
- (id)sliderView;
- (id)uiKitColorPickerContentStyleCoordinator;
- (void)updateSliderVisibility:(bool)arg1;
- (id)verticalStack;

@end
