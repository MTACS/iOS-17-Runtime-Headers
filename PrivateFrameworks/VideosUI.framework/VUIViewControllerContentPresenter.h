
@interface VUIViewControllerContentPresenter : NSObject {
    bool  _contentHasBeenDeleted;
    bool  _contentHasBeenManuallyDeleted;
    UIView * _contentView;
    unsigned long long  _currentContentViewType;
    UIView * _currentView;
    NSString * _deletedContentErrorMessage;
    NSString * _logName;
    NSString * _noContentErrorMessage;
    NSString * _noContentErrorTitle;
    UIView * _rootView;
}

@property (nonatomic) bool contentHasBeenDeleted;
@property (nonatomic) bool contentHasBeenManuallyDeleted;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) unsigned long long currentContentViewType;
@property (nonatomic, retain) UIView *currentView;
@property (nonatomic, copy) NSString *deletedContentErrorMessage;
@property (nonatomic, retain) NSString *logName;
@property (nonatomic, copy) NSString *noContentErrorMessage;
@property (nonatomic, copy) NSString *noContentErrorTitle;
@property (nonatomic, retain) UIView *rootView;

- (void).cxx_destruct;
- (id)_createAlertViewWithTitle:(id)arg1 description:(id)arg2;
- (id)_logNameForContentViewType:(unsigned long long)arg1;
- (void)configureCurrentViewFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)contentHasBeenDeleted;
- (bool)contentHasBeenManuallyDeleted;
- (id)contentView;
- (unsigned long long)currentContentViewType;
- (id)currentView;
- (id)deletedContentErrorMessage;
- (id)logName;
- (id)noContentErrorMessage;
- (id)noContentErrorTitle;
- (void)refreshNoContentViewIfNeeded;
- (id)rootView;
- (void)setContentHasBeenDeleted:(bool)arg1;
- (void)setContentHasBeenManuallyDeleted:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setCurrentContentViewType:(unsigned long long)arg1;
- (void)setCurrentView:(id)arg1;
- (void)setDeletedContentErrorMessage:(id)arg1;
- (void)setLogName:(id)arg1;
- (void)setNoContentErrorMessage:(id)arg1;
- (void)setNoContentErrorTitle:(id)arg1;
- (void)setRootView:(id)arg1;
- (void)setRootViewForViewController:(id)arg1;

@end
