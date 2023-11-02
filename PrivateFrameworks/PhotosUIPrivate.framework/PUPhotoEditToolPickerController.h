
@interface PUPhotoEditToolPickerController : UIViewController {
    double  _interToolSpacing;
    long long  _layoutDirection;
    PUViewControllerSpec * _parentSpec;
    long long  _selectedToolTag;
    NSArray * _selectionIndicatorConstraints;
    UIView * _selectionIndicatorView;
    long long  _style;
    NSArray * _toolButtonConstraints;
    NSArray * _toolButtons;
    PUPhotoEditToolPickerSpec * _toolPickerSpec;
}

@property (nonatomic) double interToolSpacing;
@property (nonatomic) long long layoutDirection;
@property (nonatomic, retain) PUViewControllerSpec *parentSpec;
@property (nonatomic) long long selectedToolTag;
@property (nonatomic, retain) NSArray *selectionIndicatorConstraints;
@property (nonatomic, retain) UIView *selectionIndicatorView;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSArray *toolButtonConstraints;
@property (nonatomic, copy) NSArray *toolButtons;
@property (nonatomic, retain) PUPhotoEditToolPickerSpec *toolPickerSpec;

- (void).cxx_destruct;
- (id)initWithLayoutDirection:(long long)arg1 style:(long long)arg2;
- (double)interToolSpacing;
- (long long)layoutDirection;
- (void)loadView;
- (id)parentSpec;
- (long long)selectedToolTag;
- (id)selectionIndicatorConstraints;
- (id)selectionIndicatorView;
- (void)setInterToolSpacing:(double)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setParentSpec:(id)arg1;
- (void)setSelectedToolTag:(long long)arg1;
- (void)setSelectionIndicatorConstraints:(id)arg1;
- (void)setSelectionIndicatorView:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setToolButtonConstraints:(id)arg1;
- (void)setToolButtons:(id)arg1;
- (void)setToolPickerSpec:(id)arg1;
- (long long)style;
- (id)toolButtonConstraints;
- (id)toolButtons;
- (id)toolPickerSpec;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
