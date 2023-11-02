
@interface SearchUITableViewCell : UITableViewCell <SearchUIBackgroundColorViewProtocol, SearchUIKeyboardableNavigationProtocol> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _customEdgeInsets;
    <SearchUIFeedbackDelegateInternal> * _delegate;
    SearchUIDragSource * _dragSource;
    bool  _isExpanded;
    UIView * _leadingTextView;
    UIView * _leadingView;
    UIView * _platterView;
    SearchUIRowModel * _rowModel;
    int  _sfSeparatorStyle;
    UIView * _sizingContainer;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } customEdgeInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SearchUIFeedbackDelegateInternal> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SearchUIDragSource *dragSource;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExpanded;
@property (nonatomic, readonly) UIView *leadingTextView;
@property (nonatomic, readonly) UIView *leadingView;
@property (nonatomic, retain) UIView *platterView;
@property (nonatomic, retain) SearchUIRowModel *rowModel;
@property (nonatomic) int sfSeparatorStyle;
@property (nonatomic, retain) UIView *sizingContainer;
@property (readonly) Class superclass;
@property (readonly) NSArray *visibleResults;

+ (bool)canCellExpandWithResults:(id)arg1;
+ (id)cellViewForRowModel:(id)arg1 feedbackDelegate:(id)arg2;
+ (double)distanceToTopOfAppIconsForMultiResultCell;
+ (id)reuseIdentifierForResult:(id)arg1;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_customInsetSize;
- (void)_setAnimating:(bool)arg1 clippingAdjacentCells:(bool)arg2;
- (bool)canSetupKeyboardHandler;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customEdgeInsets;
- (id)delegate;
- (void)didMoveToWindow;
- (id)dragSource;
- (id)init;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isExpandable;
- (bool)isExpanded;
- (id)keyboardCardSectionForFocus;
- (id)keyboardResultForFocus;
- (void)layoutSubviews;
- (id)leadingTextView;
- (id)leadingView;
- (bool)navigateKeyboardDown;
- (bool)navigateKeyboardLeft;
- (bool)navigateKeyboardRight;
- (bool)navigateKeyboardUp;
- (id)platterView;
- (void)removeKeyboardHandler;
- (void)returnKeyPressed;
- (id)rowModel;
- (void)setCustomEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragSource:(id)arg1;
- (void)setIsExpanded:(bool)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setRowModel:(id)arg1;
- (void)setSfSeparatorStyle:(int)arg1;
- (void)setSizingContainer:(id)arg1;
- (void)setupKeyboardHandler;
- (int)sfSeparatorStyle;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sizingContainer;
- (bool)supportsRecycling;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)tabKeyPressed;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;
- (void)updateExpanded:(bool)arg1;
- (void)updateWithResult:(id)arg1;
- (void)updateWithResults:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)viewContainingContent;
- (id)visibleResults;
- (void)willMoveToWindow:(id)arg1;

@end
