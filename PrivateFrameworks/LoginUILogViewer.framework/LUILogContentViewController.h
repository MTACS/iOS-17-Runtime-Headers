
@interface LUILogContentViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate> {
    <LUILogContentViewControllerDelegate> * _delegate;
    LUILogLocatorView * _logLocatorView;
    LUILogOptionsView * _logOptionsView;
    UIPanGestureRecognizer * _panGesture;
    NSArray * _screenshotItems;
    UILabel * _scrollIndicatorView;
    UIActivityIndicatorView * _spinner;
    UITextView * _textView;
    UIView * _textViewHolderView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LUILogContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LUILogLocatorView *logLocatorView;
@property (nonatomic, retain) LUILogOptionsView *logOptionsView;
@property (nonatomic, retain) UIPanGestureRecognizer *panGesture;
@property (nonatomic, retain) NSArray *screenshotItems;
@property (nonatomic, retain) UILabel *scrollIndicatorView;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextView *textView;
@property (nonatomic, retain) UIView *textViewHolderView;

- (void).cxx_destruct;
- (void)_applyScreenShotAnimation;
- (bool)_canShowWhileLocked;
- (id)_createLogLocatorView;
- (id)_createLogOptionsView;
- (id)_createLogTextView;
- (id)_dateWithPercentage:(double)arg1;
- (id)_generateScreenshotItem;
- (void)_setupButtonActions;
- (void)_setupTextViewGesture;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_visibleRangeOfTextView:(id)arg1;
- (void)clearScreenshots;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dealloc;
- (id)delegate;
- (void)downArrowButtonTapped:(id)arg1;
- (void)enableTimeConsumingOptions:(bool)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)loadView;
- (id)logLocatorView;
- (void)logOptionButtonTapped:(id)arg1;
- (id)logOptionsView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)panGesture;
- (void)screenshotButtonTapped:(id)arg1;
- (id)screenshotItems;
- (id)scrollIndicatorView;
- (void)setDelegate:(id)arg1;
- (void)setLogLocatorView:(id)arg1;
- (void)setLogOptionsView:(id)arg1;
- (void)setPanGesture:(id)arg1;
- (void)setScreenshotItems:(id)arg1;
- (void)setScrollIndicatorView:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)setTextViewHolderView:(id)arg1;
- (void)showLogOptionsView;
- (void)showLogTextView;
- (void)showSpinner:(bool)arg1;
- (id)spinner;
- (id)textView;
- (id)textViewHolderView;
- (void)upArrowButtonTapped:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
