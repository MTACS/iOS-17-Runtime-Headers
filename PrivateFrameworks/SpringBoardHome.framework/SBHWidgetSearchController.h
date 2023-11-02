
@interface SBHWidgetSearchController : UISearchController {
    unsigned long long  _addWidgetSheetStyle;
    bool  _alwaysShowBarBackground;
    <SBIconListLayoutProvider> * _listLayoutProvider;
    NSMapTable * _scrollProgressByClient;
    UIView * _searchBarBackgroundView;
    UIView * _searchBarTextFieldBackgroundView;
    bool  _shouldInsetContentForGrabber;
    double  _textFieldExtraHeight;
    double  _textFieldToBarBackgroundBottomSpacing;
    double  _textFieldToWidgetsSpacing;
}

@property (nonatomic) unsigned long long addWidgetSheetStyle;
@property (nonatomic) bool alwaysShowBarBackground;
@property (nonatomic, readonly) <SBIconListLayoutProvider> *listLayoutProvider;
@property (nonatomic, retain) UIView *searchBarBackgroundView;
@property (nonatomic, readonly) UIView *searchBarTextFieldBackgroundView;
@property (nonatomic) bool shouldInsetContentForGrabber;
@property (nonatomic) double textFieldExtraHeight;
@property (nonatomic) double textFieldToBarBackgroundBottomSpacing;
@property (nonatomic) double textFieldToWidgetsSpacing;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_setupBarBackground;
- (void)_setupSearchBar;
- (void)_setupTextField;
- (void)_setupTextFieldBackground;
- (void)_setupTextFieldMetrics;
- (id)_textFieldFont;
- (unsigned long long)addWidgetSheetStyle;
- (bool)alwaysShowBarBackground;
- (void)dealloc;
- (double)grabberTopSpacing;
- (id)initWithListLayoutProvider:(id)arg1 addWidgetSheetStyle:(unsigned long long)arg2;
- (id)listLayoutProvider;
- (id)searchBarBackgroundView;
- (id)searchBarTextFieldBackgroundView;
- (void)setAddWidgetSheetStyle:(unsigned long long)arg1;
- (void)setAlwaysShowBarBackground:(bool)arg1;
- (void)setSearchBarBackgroundView:(id)arg1;
- (void)setShouldInsetContentForGrabber:(bool)arg1;
- (void)setTextFieldExtraHeight:(double)arg1;
- (void)setTextFieldToBarBackgroundBottomSpacing:(double)arg1;
- (void)setTextFieldToWidgetsSpacing:(double)arg1;
- (bool)shouldInsetContentForGrabber;
- (unsigned long long)supportedInterfaceOrientations;
- (double)textFieldExtraHeight;
- (double)textFieldToBarBackgroundBottomSpacing;
- (double)textFieldToWidgetsSpacing;
- (void)updateSearchBarBackgroundForScrollDistance:(double)arg1 forClient:(id)arg2;
- (void)updateSearchBarContentInsetsWithWidth:(double)arg1;

@end
