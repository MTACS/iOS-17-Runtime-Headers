
@interface UINavigationBarTitleViewWrapper : NSObject {
    _UINavigationBarTitleView * _navBarTitleView;
    UIView * _titleView;
}

@property (nonatomic, retain) _UINavigationBarTitleView *navBarTitleView;
@property (nonatomic, retain) UIView *titleView;

- (void).cxx_destruct;
- (id)navBarTitleView;
- (void)setNavBarTitleView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (id)titleView;

@end
