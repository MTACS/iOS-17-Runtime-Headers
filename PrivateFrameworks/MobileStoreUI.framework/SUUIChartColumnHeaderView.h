
@interface SUUIChartColumnHeaderView : UIControl {
    NSArray * _buttons;
    long long  _selectedTitleIndex;
}

@property (nonatomic, readonly) double edgePadding;
@property (nonatomic) long long selectedTitleIndex;
@property (nonatomic, copy) NSArray *titles;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)_reloadSelectedButton;
- (void)dealloc;
- (double)edgePadding;
- (void)layoutSubviews;
- (long long)selectedTitleIndex;
- (void)setBackgroundColor:(id)arg1;
- (void)setSelectedTitleIndex:(long long)arg1;
- (void)setTitles:(id)arg1;
- (void)sizeToFit;
- (id)titles;

@end
