
@interface WFDrawerPaneSearchHeaderView : UIView <WFDrawerPaneHeaderView> {
    UIButton * _closeButton;
    <WFDrawerPaneHeaderViewDelegate> * _delegate;
    UISearchBar * _searchBar;
    UIView * _separatorView;
}

@property (nonatomic, readonly) UIButton *closeButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFDrawerPaneHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, readonly) UIView *separatorView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)closeButton;
- (id)delegate;
- (id)initWithSearchBar:(id)arg1;
- (id)layoutConstraints;
- (id)searchBar;
- (id)separatorView;
- (void)setDelegate:(id)arg1;

@end
