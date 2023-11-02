
@interface PRComplicationGalleryDetailPageViewController : UIViewController <SBHWidgetWrapperViewControllerDelegate> {
    unsigned long long  _allowedFamilies;
    UIStackView * _complicationsStackView;
    <PRComplicationGalleryDetailPageViewControllerDelegate> * _delegate;
    PRAddWidgetDetailSheetWidgetDescriptionView * _descriptionView;
    <SBHAddWidgetSheetGalleryItem> * _galleryItem;
    <SBIconViewProviding> * _iconViewProvider;
    UILayoutGuide * _layoutGuide;
    <SBIconListLayoutProvider> * _listLayoutProvider;
    UIView * _referenceView;
    UIStackView * _stackView;
    <SBHWidgetDragHandling> * _widgetDragHandler;
    <PRComplicationGalleryWidgetHostProviding> * _widgetHostProviding;
}

@property (nonatomic) unsigned long long allowedFamilies;
@property (nonatomic, retain) UIStackView *complicationsStackView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRComplicationGalleryDetailPageViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PRAddWidgetDetailSheetWidgetDescriptionView *descriptionView;
@property (nonatomic, readonly) <SBHAddWidgetSheetGalleryItem> *galleryItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SBIconViewProviding> *iconViewProvider;
@property (nonatomic, retain) UILayoutGuide *layoutGuide;
@property (nonatomic, retain) <SBIconListLayoutProvider> *listLayoutProvider;
@property (nonatomic, retain) UIView *referenceView;
@property (nonatomic, retain) UIStackView *stackView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SBHWidgetDragHandling> *widgetDragHandler;
@property (nonatomic) <PRComplicationGalleryWidgetHostProviding> *widgetHostProviding;

- (void).cxx_destruct;
- (bool)_shouldDisplayFamily:(long long)arg1;
- (unsigned long long)allowedFamilies;
- (id)backgroundViewMatchingMaterialBeneathWrapperViewController:(id)arg1;
- (id)complicationsStackView;
- (void)configureBackgroundView:(id)arg1 matchingMaterialBeneathWrapperViewController:(id)arg2;
- (id)delegate;
- (id)descriptionView;
- (id)galleryItem;
- (void)iconTapped:(id)arg1;
- (id)iconViewProvider;
- (id)initWithGalleryItem:(id)arg1 listLayoutProvider:(id)arg2 iconViewProvider:(id)arg3 widgetDragHandler:(id)arg4 allowedFamilies:(unsigned long long)arg5;
- (id)layoutGuide;
- (id)listLayoutProvider;
- (void)loadView;
- (id)referenceView;
- (void)setAllowedFamilies:(unsigned long long)arg1;
- (void)setComplicationsStackView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDescriptionView:(id)arg1;
- (void)setIconViewProvider:(id)arg1;
- (void)setLayoutGuide:(id)arg1;
- (void)setListLayoutProvider:(id)arg1;
- (void)setReferenceView:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setWidgetHostProviding:(id)arg1;
- (id)stackView;
- (void)updateParallaxEffectInReferenceView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (id)widgetDragHandler;
- (id)widgetHostProviding;

@end
