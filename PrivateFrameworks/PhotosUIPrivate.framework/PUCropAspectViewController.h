
@interface PUCropAspectViewController : UIViewController {
    NSArray * _allAspectRatios;
    NSArray * _aspectButtons;
    NSArray * _aspectConstraints;
    long long  _aspectOrientation;
    UIView * _buttonContainer;
    PUCropAspect * _currentCropAspect;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentCropSize;
    <PUCropAspectViewControllerDelegate> * _delegate;
    long long  _layoutOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalSize;
    UIView * _scrollExtraLeftView;
    UIScrollView * _scrollView;
    UIView * _scrollViewContainer;
    PUCropToolControllerSpec * _spec;
}

@property (nonatomic, retain) NSArray *allAspectRatios;
@property (nonatomic, retain) NSArray *aspectButtons;
@property (nonatomic, retain) NSArray *aspectConstraints;
@property (nonatomic) long long aspectOrientation;
@property (nonatomic, retain) UIView *buttonContainer;
@property (nonatomic, retain) PUCropAspect *currentCropAspect;
@property (nonatomic) struct CGSize { double x1; double x2; } currentCropSize;
@property (nonatomic) <PUCropAspectViewControllerDelegate> *delegate;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic) struct CGSize { double x1; double x2; } originalSize;
@property (nonatomic, retain) UIView *scrollExtraLeftView;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIView *scrollViewContainer;
@property (nonatomic, retain) PUCropToolControllerSpec *spec;

- (void).cxx_destruct;
- (id)allAspectRatios;
- (void)aspectButtonPressed:(id)arg1;
- (id)aspectButtons;
- (id)aspectConstraints;
- (long long)aspectOrientation;
- (id)buttonContainer;
- (id)currentCropAspect;
- (struct CGSize { double x1; double x2; })currentCropSize;
- (id)delegate;
- (id)initWithLayoutOrientation:(long long)arg1 originalSize:(struct CGSize { double x1; double x2; })arg2 currentSize:(struct CGSize { double x1; double x2; })arg3 currentCropAspect:(id)arg4 spec:(id)arg5;
- (long long)layoutOrientation;
- (id)matchingCropAspectTo:(id)arg1;
- (struct CGSize { double x1; double x2; })originalSize;
- (id)scrollExtraLeftView;
- (id)scrollView;
- (id)scrollViewContainer;
- (void)setAllAspectRatios:(id)arg1;
- (void)setAspectButtons:(id)arg1;
- (void)setAspectConstraints:(id)arg1;
- (void)setAspectOrientation:(long long)arg1;
- (void)setButtonContainer:(id)arg1;
- (void)setCurrentCropAspect:(id)arg1;
- (void)setCurrentCropSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setOriginalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScrollExtraLeftView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrollViewContainer:(id)arg1;
- (void)setSpec:(id)arg1;
- (id)spec;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAspectButtonSelection;
- (void)updateAspectButtons;
- (void)updateAspectConstraints;
- (void)viewDidLoad;

@end
