
@interface PREditingTitleLayoutPickerComponentViewController : UIViewController {
    NSArray * _cellViews;
    <PREditingTitleLayoutPickerComponentViewControllerDelegate> * _delegate;
    NSArray * _heightCellConstraints;
    double  _largestItemHeight;
    PREditingPickerCellView * _selectedCellView;
    unsigned long long  _selectedTitleLayout;
    UIStackView * _stackView;
    NSArray * _titleLayouts;
    bool  _usingSmallerSizing;
}

@property (nonatomic, copy) NSArray *cellViews;
@property (nonatomic) <PREditingTitleLayoutPickerComponentViewControllerDelegate> *delegate;
@property (nonatomic, copy) NSArray *heightCellConstraints;
@property (nonatomic) double largestItemHeight;
@property (nonatomic, retain) PREditingPickerCellView *selectedCellView;
@property (nonatomic) unsigned long long selectedTitleLayout;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, readonly, copy) NSArray *titleLayouts;
@property (getter=isUsingSmallerSizing, nonatomic) bool usingSmallerSizing;

+ (id)defaultTitleLayoutsForRole:(id)arg1;

- (void).cxx_destruct;
- (double)cellHeight;
- (id)cellViewFor:(unsigned long long)arg1 largestItemHeight:(double*)arg2;
- (id)cellViews;
- (id)delegate;
- (double)estimatedHeight;
- (id)heightCellConstraints;
- (id)initWithTitleLayouts:(id)arg1 selectedLayout:(unsigned long long)arg2;
- (bool)isUsingSmallerSizing;
- (bool)isUsingVerticalLanguage;
- (double)largestItemHeight;
- (void)loadView;
- (id)selectedCellView;
- (unsigned long long)selectedTitleLayout;
- (void)setCellViews:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeightCellConstraints:(id)arg1;
- (void)setLargestItemHeight:(double)arg1;
- (void)setSelectedCellView:(id)arg1;
- (void)setSelectedTitleLayout:(unsigned long long)arg1;
- (void)setStackView:(id)arg1;
- (void)setUsingSmallerSizing:(bool)arg1;
- (id)stackView;
- (id)titleLayouts;
- (void)updateLayoutForCurrentSize;
- (void)viewDidLayoutSubviews;

@end
