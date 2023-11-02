
@interface STSSearchBar : UISearchBar {
    bool  _clickBeganInSearchBar;
    <STSSearchBarDelegate> * _stsDelegate;
}

@property (nonatomic) <STSSearchBarDelegate> *stsDelegate;

- (void).cxx_destruct;
- (void)setStsDelegate:(id)arg1;
- (id)stsDelegate;

@end
