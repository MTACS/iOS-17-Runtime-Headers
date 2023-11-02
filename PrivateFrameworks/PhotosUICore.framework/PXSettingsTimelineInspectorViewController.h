
@interface PXSettingsTimelineInspectorViewController : UIViewController <PXDiagnosticsEnvironment, UINavigationControllerDelegate> {
    NSMutableDictionary * _assetByAssetLocalIdentifier;
    NSDate * _currentTime;
    PXTimelineEntry * _entryInDisplay;
    UITextView * _entryInfoTextView;
    NSArray * _filteredContent;
    UIImageView * _imageView;
    bool  _showFilteredContent;
    UILabel * _showFilteredContentLabel;
    UISwitch * _showFilteredContentSwitch;
    UILabel * _sliderValueLabel;
    UISlider * _timeSlider;
    NSArray * _timeline;
    struct CGSize { 
        double width; 
        double height; 
    }  _widgetSize;
}

@property (nonatomic, retain) NSMutableDictionary *assetByAssetLocalIdentifier;
@property (nonatomic, retain) NSDate *currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXTimelineEntry *entryInDisplay;
@property (nonatomic, retain) UITextView *entryInfoTextView;
@property (nonatomic, retain) NSArray *filteredContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) bool showFilteredContent;
@property (nonatomic, retain) UILabel *showFilteredContentLabel;
@property (nonatomic, retain) UISwitch *showFilteredContentSwitch;
@property (nonatomic, retain) UILabel *sliderValueLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UISlider *timeSlider;
@property (nonatomic, retain) NSArray *timeline;
@property (nonatomic) struct CGSize { double x1; double x2; } widgetSize;

- (void).cxx_destruct;
- (id)assetByAssetLocalIdentifier;
- (id)currentTime;
- (void)displayFilteredContentIndex:(unsigned long long)arg1;
- (void)displaySliderTime:(id)arg1;
- (void)displayTimelineEntry:(id)arg1;
- (id)entryInDisplay;
- (id)entryInfoTextView;
- (id)filteredContent;
- (void)handleTap:(id)arg1;
- (id)imageView;
- (id)initWithWidgetSizeClass:(unsigned long long)arg1 timeline:(id)arg2 dataSource:(id)arg3;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)setAssetByAssetLocalIdentifier:(id)arg1;
- (void)setCurrentTime:(id)arg1;
- (void)setEntryInDisplay:(id)arg1;
- (void)setEntryInfoTextView:(id)arg1;
- (void)setFilteredContent:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setShowFilteredContent:(bool)arg1;
- (void)setShowFilteredContentLabel:(id)arg1;
- (void)setShowFilteredContentSwitch:(id)arg1;
- (void)setSliderValueLabel:(id)arg1;
- (void)setTimeSlider:(id)arg1;
- (void)setTimeline:(id)arg1;
- (void)setWidgetSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)showFilteredContent;
- (id)showFilteredContentLabel;
- (id)showFilteredContentSwitch;
- (void)sliderValueChanged:(id)arg1;
- (id)sliderValueLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })strokeRectFromCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 originalImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 targetImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)switchValueChanged:(id)arg1;
- (id)timeSlider;
- (id)timeline;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (struct CGSize { double x1; double x2; })widgetSize;

@end
