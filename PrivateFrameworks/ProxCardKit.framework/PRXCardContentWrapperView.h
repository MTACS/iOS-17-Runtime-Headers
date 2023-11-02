
@interface PRXCardContentWrapperView : UIView <PRXCardBottomTrayDelegate, PRXCardContentViewDelegate, UIScrollViewDelegate> {
    UIView * _bottomKeyline;
    PRXCardBottomTray * _bottomTray;
    PRXCardContentView * _contentView;
    PRXButton * _dismissButton;
    PRXAction * _infoButtonAction;
    UIScrollView * _scrollView;
    NSLayoutConstraint * _scrollViewBottomConstraint;
    UILabel * _scrolledTitleLabel;
    NSString * _title;
    UIView * _titleContainer;
    UIView * _topKeyline;
}

@property (nonatomic, copy) NSArray *actionButtons;
@property (nonatomic, readonly, copy) NSArray *auxiliaryViews;
@property (nonatomic, readonly) UIView *bottomKeyline;
@property (nonatomic, readonly) PRXCardBottomTray *bottomTray;
@property (nonatomic, readonly) PRXCardContentView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PRXButton *dismissButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PRXAction *infoButtonAction;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) NSLayoutConstraint *scrollViewBottomConstraint;
@property (nonatomic, readonly) UILabel *scrolledTitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UIView *titleContainer;
@property (nonatomic, readonly) UIView *topKeyline;

- (void).cxx_destruct;
- (id)actionButtons;
- (id)auxiliaryViews;
- (id)bottomKeyline;
- (id)bottomTray;
- (id)contentView;
- (void)didChangeContentsOfBottomTray:(id)arg1;
- (id)dismissButton;
- (id)infoButtonAction;
- (id)initWithContentView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)removeBottomTray;
- (void)scrollToBottom;
- (id)scrollView;
- (id)scrollViewBottomConstraint;
- (void)scrollViewDidScroll:(id)arg1;
- (id)scrolledTitleLabel;
- (void)setActionButtons:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setDismissButton:(id)arg1;
- (void)setInfoButtonAction:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)title;
- (id)titleContainer;
- (id)topKeyline;

@end
