
@interface PREditingAmbientColorPickerViewController : UIViewController {
    id /* block */  _changeHandler;
    PREditorColorPickerConfiguration * _colorPickerConfiguration;
    bool  _needsScrollToSelectedItem;
    UIScrollView * _scrollView;
    PREditingColorItemView * _selectedItemView;
    UIStackView * _stackView;
}

@property (nonatomic, readonly, copy) id /* block */ changeHandler;
@property (nonatomic, readonly) PREditorColorPickerConfiguration *colorPickerConfiguration;
@property (nonatomic) bool needsScrollToSelectedItem;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) PREditingColorItemView *selectedItemView;
@property (nonatomic, retain) UIStackView *stackView;

- (void).cxx_destruct;
- (id /* block */)changeHandler;
- (id)colorPickerConfiguration;
- (void)didSelectColorItem:(id)arg1;
- (void)didTapColorItemView:(id)arg1;
- (id)initWithColorPickerConfiguration:(id)arg1 width:(double)arg2 changeHandler:(id /* block */)arg3;
- (void)loadView;
- (bool)needsScrollToSelectedItem;
- (void)scrollToSelectedItemAnimated:(bool)arg1;
- (id)scrollView;
- (id)selectedItemView;
- (void)setNeedsScrollToSelectedItem:(bool)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSelectedItemView:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
