
@interface CNSharedProfileBannerCell : CNContactCell {
    <CNSharedProfileBannerViewDelegate> * _delegate;
    CNSharedProfileBannerView * _sharedProfileBannerContentView;
}

@property (nonatomic) <CNSharedProfileBannerViewDelegate> *delegate;
@property (nonatomic, retain) CNSharedProfileBannerView *sharedProfileBannerContentView;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)minCellHeight;
- (void)setDelegate:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setSharedProfileBannerContentView:(id)arg1;
- (void)setUpView;
- (void)setUpWithSharedProfileStateOracle:(id)arg1 tappedAction:(unsigned long long)arg2 hasPerformedAnimation:(bool)arg3;
- (id)sharedProfileBannerContentView;
- (void)updateConstraints;
- (id)variableConstraints;

@end
