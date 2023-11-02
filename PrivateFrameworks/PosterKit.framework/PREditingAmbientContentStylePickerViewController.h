
@interface PREditingAmbientContentStylePickerViewController : UIViewController {
    id /* block */  _changeHandler;
    <PREditingAmbientContentStylePickerViewControllerDelegate> * _delegate;
    bool  _needsScrollToSelectedItem;
    UIScrollView * _scrollView;
    <PRPosterContentStyle> * _selectedContentStyle;
    PREditingContentStyleItemView * _selectedItemView;
    UIStackView * _stackView;
    NSArray * _styleCoordinators;
    PREditorContentStylePickerConfiguration * _stylePickerConfiguration;
}

@property (nonatomic, readonly, copy) id /* block */ changeHandler;
@property (nonatomic) <PREditingAmbientContentStylePickerViewControllerDelegate> *delegate;
@property (nonatomic) bool needsScrollToSelectedItem;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, retain) <PRPosterContentStyle> *selectedContentStyle;
@property (nonatomic, retain) PREditingContentStyleItemView *selectedItemView;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, retain) NSArray *styleCoordinators;
@property (nonatomic, readonly) PREditorContentStylePickerConfiguration *stylePickerConfiguration;

- (void).cxx_destruct;
- (id /* block */)changeHandler;
- (id)delegate;
- (void)didSelectStyle:(id)arg1;
- (void)didTapContentStyleItemView:(id)arg1;
- (id)initWithContentStylePickerConfiguration:(id)arg1 width:(double)arg2 changeHandler:(id /* block */)arg3;
- (void)loadView;
- (bool)needsScrollToSelectedItem;
- (void)scrollToSelectedItemAnimated:(bool)arg1;
- (id)scrollView;
- (id)selectedContentStyle;
- (id)selectedItemView;
- (void)setDelegate:(id)arg1;
- (void)setNeedsScrollToSelectedItem:(bool)arg1;
- (void)setSelectedContentStyle:(id)arg1;
- (void)setSelectedItemView:(id)arg1;
- (void)setStyleCoordinators:(id)arg1;
- (id)stackView;
- (id)styleCoordinators;
- (id)stylePickerConfiguration;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
