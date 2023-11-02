
@interface UIKBAutoFillTestArchive : NSObject <NSCoding, NSCopying> {
    UIKBAutoFillTestExpectedResult * _expectedResult;
    NSString * _navigationControllerClassName;
    NSString * _presentingViewControllerClassName;
    bool  _requiresNavigationControllerNesting;
    UIView * _snapshotView;
    NSMutableDictionary * _tableViewTagToDataSource;
    NSString * _viewControllerClassName;
    UINavigationItem * _viewControllerNavigationItem;
    NSString * _viewControllerTitle;
}

@property (nonatomic, retain) UIKBAutoFillTestExpectedResult *expectedResult;
@property (nonatomic, copy) NSString *navigationControllerClassName;
@property (nonatomic, copy) NSString *presentingViewControllerClassName;
@property (nonatomic) bool requiresNavigationControllerNesting;
@property (nonatomic, retain) UIView *snapshotView;
@property (nonatomic, copy) NSString *viewControllerClassName;
@property (nonatomic, retain) UINavigationItem *viewControllerNavigationItem;
@property (nonatomic, copy) NSString *viewControllerTitle;

+ (id)autoFillTestArchiveWithData:(id)arg1;

- (void).cxx_destruct;
- (id)autoFillTestArchiveData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)expectedResult;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)navigationControllerClassName;
- (id)presentingViewControllerClassName;
- (bool)requiresNavigationControllerNesting;
- (void)setExpectedResult:(id)arg1;
- (void)setNavigationControllerClassName:(id)arg1;
- (void)setPresentingViewControllerClassName:(id)arg1;
- (void)setRequiresNavigationControllerNesting:(bool)arg1;
- (void)setSnapshotView:(id)arg1;
- (void)setTableViewDataSource:(id)arg1 forTableViewWithTag:(long long)arg2;
- (void)setViewControllerClassName:(id)arg1;
- (void)setViewControllerNavigationItem:(id)arg1;
- (void)setViewControllerTitle:(id)arg1;
- (id)snapshotView;
- (id)tableViewDataSourceWithTag:(long long)arg1;
- (id)viewControllerClassName;
- (id)viewControllerNavigationItem;
- (id)viewControllerTitle;

@end
