
@interface VKCImageDataDetectorView : VKCImageBaseOverlayView <VKCDataDetectorElementViewDelegate> {
    NSMutableSet * __displayedElementViews;
    NSArray * _allElements;
    bool  _allowLongPressDDActivationOnly;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundsUsedToCalculateElementFrames;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentsRectUsedToCalculateElementFrames;
    unsigned long long  _dataDetectorTypes;
    <VKCImageDataDetectorViewDelegate> * _delegate;
    NSArray * _displayedElements;
    bool  _highlightSelectableItems;
    NSArray * _unfilteredElements;
}

@property (nonatomic, retain) NSMutableSet *_displayedElementViews;
@property (nonatomic, retain) NSArray *allElements;
@property (nonatomic) bool allowLongPressDDActivationOnly;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundsUsedToCalculateElementFrames;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRectUsedToCalculateElementFrames;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKCImageDataDetectorViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedElementViews;
@property (nonatomic, retain) NSArray *displayedElements;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightSelectableItems;
@property (nonatomic, readonly) bool needsElementFrameUpdate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *unfilteredElements;

- (void).cxx_destruct;
- (id)_displayedElementViews;
- (void)activateLongPressDataDetectorAtPoint:(struct CGPoint { double x1; double x2; })arg1 maxDistance:(double)arg2;
- (id)allElements;
- (bool)allowLongPressDDActivationOnly;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsUsedToCalculateElementFrames;
- (id)closestElementToPoint:(struct CGPoint { double x1; double x2; })arg1 maxDistance:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRectUsedToCalculateElementFrames;
- (void)dataDetectorElementView:(id)arg1 analyticsEventOccured:(id)arg2;
- (bool)dataDetectorElementView:(id)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (unsigned long long)dataDetectorTypes;
- (id)delegate;
- (void)didMoveToSuperview;
- (id)displayedElementViews;
- (id)displayedElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDataDetectorElement:(id)arg1;
- (bool)highlightSelectableItems;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)loadDataDetectorViewsFromDisplayedElements;
- (bool)needsElementFrameUpdate;
- (id)presentingViewControllerForInteractionWithDataDetectorElementView:(id)arg1;
- (id)previewForDataDetectorElementView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewImageBoundsForDataDetectorElementView:(id)arg1;
- (id)previewImageForDataDetectorElementView:(id)arg1;
- (void)setAllElements:(id)arg1;
- (void)setAllowLongPressDDActivationOnly:(bool)arg1;
- (void)setBoundsUsedToCalculateElementFrames:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsRectUsedToCalculateElementFrames:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCustomAnalyticsIdentifier:(id)arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedElements:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightSelectableItems:(bool)arg1;
- (void)setHighlightSelectableItems:(bool)arg1 animated:(bool)arg2;
- (void)setRecognitionResult:(id)arg1;
- (void)setUnfilteredElements:(id)arg1;
- (void)set_displayedElementViews:(id)arg1;
- (bool)shouldFilterElementForSpecialCase:(id)arg1;
- (id)unfilteredElements;
- (void)updateAllElementViewFrames;
- (void)updateAllElementViewFramesIfNecessary;
- (void)updateDisplayedElements;
- (id)viewSpaceQuadsForDataDetectorElement:(id)arg1;
- (void)willDismissMenuForDataDetectorElementView:(id)arg1;
- (void)willDisplayMenuForDataDetectorElementView:(id)arg1;

@end
