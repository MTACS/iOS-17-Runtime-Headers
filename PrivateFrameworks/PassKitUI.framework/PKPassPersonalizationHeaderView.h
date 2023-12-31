
@interface PKPassPersonalizationHeaderView : PKTableHeaderView {
    unsigned long long  _state;
    PKTableHeaderView * _tableHeaderView;
}

@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)_configureForCurrentState;
- (void)dealloc;
- (id)initWithLogoImage:(id)arg1 description:(id)arg2;
- (void)layoutSubviews;
- (void)setState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)state;

@end
