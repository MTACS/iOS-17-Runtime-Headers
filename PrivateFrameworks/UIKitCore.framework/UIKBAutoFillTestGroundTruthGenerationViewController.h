
@interface UIKBAutoFillTestGroundTruthGenerationViewController : UIViewController <UIKBAutoFillTestTaggerViewDelegate> {
    <UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> * _delegate;
    UIBarButtonItem * _doneBarButtonItem;
    UIKBAutoFillTestExpectedResult * _expectedResult;
    UIView * _highlightBox;
    UIView * _highlightView;
    UIScrollView * _scrollView;
    NSLayoutConstraint * _scrollViewBottomConstraint;
    UIKBAutoFillTestTaggerView * _taggerView;
    UIKBAutoFillTestViewController * _testViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIKBAutoFillTestViewController *testViewController;

- (void).cxx_destruct;
- (void)_cancelBarButtonItemAction:(id)arg1;
- (void)_enumerateSubviewsOfRootView:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_moveTaggerHighlightViewOverView:(id)arg1;
- (void)_removeTaggerHighlightView;
- (id)delegate;
- (id)initWithAutoFillTestViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)taggerView:(id)arg1 didTagFormRequest:(id)arg2 withSelectedType:(long long)arg3;
- (void)taggerView:(id)arg1 didTagTextFieldRequest:(id)arg2 withSelectedType:(long long)arg3;
- (long long)taggerView:(id)arg1 selectedTypeForFormRequest:(id)arg2;
- (long long)taggerView:(id)arg1 selectedTypeForTextFieldRequest:(id)arg2;
- (void)taggerView:(id)arg1 willTagRequest:(id)arg2;
- (void)taggerViewDidFinish:(id)arg1;
- (id)testViewController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
