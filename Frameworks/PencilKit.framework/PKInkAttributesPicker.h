
@interface PKInkAttributesPicker : PKPaletteAttributeViewController <UIPopoverPresentationControllerDelegate, _PKInkAttributesPickerViewDelegate> {
    <PKInkAttributesPickerDelegate> * _delegate;
    double  _minimumOpacityValue;
    _PKInkAttributesPickerView * _pickerView;
    bool  _updatingOpacityValue;
}

@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <PKInkAttributesPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minimumOpacityValue;
@property (nonatomic, retain) _PKInkAttributesPickerView *pickerView;
@property (nonatomic, retain) PKInk *selectedInk;
@property (readonly) Class superclass;
@property (getter=isUpdatingOpacityValue, nonatomic, readonly) bool updatingOpacityValue;

+ (double)defaultMinimumOpacityValue;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_inkAttributesPickerViewUserDidEndDraggingSlider:(id)arg1;
- (void)_inkAttributesPickerViewUserDidStartDraggingSlider:(id)arg1;
- (void)_notifyInkAttributesPickerDidChangeInk;
- (void)_updateUI;
- (long long)colorUserInterfaceStyle;
- (id)delegate;
- (unsigned long long)displayMode;
- (id)initWithInk:(id)arg1 toolConfiguration:(id)arg2;
- (void)inkAttributesPickerViewDidChangeInkOpacity:(id)arg1;
- (void)inkAttributesPickerViewDidChangeInkThickness:(id)arg1;
- (bool)isUpdatingOpacityValue;
- (double)minimumOpacityValue;
- (id)pickerView;
- (id)selectedInk;
- (void)setColorUserInterfaceStyle:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setMinimumOpacityValue:(double)arg1;
- (void)setPickerView:(id)arg1;
- (void)setSelectedInk:(id)arg1;
- (void)setSelectedInk:(id)arg1 animated:(bool)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
