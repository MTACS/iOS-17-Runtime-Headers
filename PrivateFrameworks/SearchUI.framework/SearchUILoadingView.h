
@interface SearchUILoadingView : NUIContainerBoxView {
    TLKLabel * _loadingLabel;
    UIActivityIndicatorView * _loadingSpinner;
    unsigned long long  _loadingState;
}

@property (retain) TLKLabel *loadingLabel;
@property (retain) UIActivityIndicatorView *loadingSpinner;
@property (nonatomic) unsigned long long loadingState;

- (void).cxx_destruct;
- (id)init;
- (id)loadingLabel;
- (id)loadingSpinner;
- (unsigned long long)loadingState;
- (void)setLoadingLabel:(id)arg1;
- (void)setLoadingSpinner:(id)arg1;
- (void)setLoadingState:(unsigned long long)arg1;

@end
