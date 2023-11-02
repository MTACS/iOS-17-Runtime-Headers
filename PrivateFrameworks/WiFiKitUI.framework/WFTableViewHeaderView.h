
@interface WFTableViewHeaderView : UITableViewHeaderFooterView {
    UIActivityIndicatorView * _activityIndicatorView;
    bool  _animating;
    UIListContentView * _listContentView;
    NSString * _title;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) bool animating;
@property (nonatomic, retain) UIListContentView *listContentView;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_configureContents;
- (id)activityIndicatorView;
- (bool)animating;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)listContentView;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setListContentView:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
