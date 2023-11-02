
@interface PULivePhotoKeyFrameSelectionViewController : UIViewController {
    <PULivePhotoKeyFrameSelectionViewControllerDelegate> * _delegate;
    UIButton * _makeKeyPhotoBtn;
    NSString * _selectionTitle;
}

@property (nonatomic) <PULivePhotoKeyFrameSelectionViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIButton *makeKeyPhotoBtn;
@property (nonatomic, copy) NSString *selectionTitle;

- (void).cxx_destruct;
- (void)_updateButtonTitle;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)makeKeyPhotoBtn;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (long long)preferredUserInterfaceStyle;
- (id)selectionTitle;
- (void)setDelegate:(id)arg1;
- (void)setMakeKeyPhotoBtn:(id)arg1;
- (void)setSelectionTitle:(id)arg1;
- (void)tapMakeKeyPhoto:(id)arg1;
- (void)viewDidLoad;

@end
