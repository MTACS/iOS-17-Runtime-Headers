
@interface _UICellularSignalView : UIView <_UISignalView> {
    UIView<_UISignalViewImplementation> * _signalView;
}

@property (nonatomic, copy) UIColor *activeColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIColor *inactiveColor;
@property (nonatomic) long long numberOfActiveBars;
@property (nonatomic) long long numberOfBars;
@property (nonatomic) long long signalMode;
@property (nonatomic) long long sizeCategory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)activeColor;
- (id)inactiveColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSizeCategory:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (long long)numberOfActiveBars;
- (long long)numberOfBars;
- (void)setActiveColor:(id)arg1;
- (void)setInactiveColor:(id)arg1;
- (void)setNumberOfActiveBars:(long long)arg1;
- (void)setNumberOfBars:(long long)arg1;
- (void)setSignalMode:(long long)arg1;
- (void)setSizeCategory:(long long)arg1;
- (long long)signalMode;
- (long long)sizeCategory;

@end
