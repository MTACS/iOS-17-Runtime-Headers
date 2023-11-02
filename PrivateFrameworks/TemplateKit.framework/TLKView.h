
@interface TLKView : UIView <TLKObservable, TLKObserver> {
    UIView * _contentView;
    UIView * _leadingTextView;
    TLKAppearance * _tlkAppearance;
    long long  batchUpdateCount;
    <TLKObserver> * observer;
}

@property (nonatomic) long long batchUpdateCount;
@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) UIView *leadingTextView;
@property <TLKObserver> *observer;
@property (readonly) Class superclass;
@property (nonatomic, retain) TLKAppearance *tlkAppearance;
@property (readonly) bool usesDefaultLayoutMargins;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultLayoutMargins;
+ (void)enableLightKeylineStroke:(bool)arg1 forView:(id)arg2;
+ (void)enableShadow:(bool)arg1 forView:(id)arg2;
+ (Class)layerClass;
+ (void)makeContainerShadowCompatible:(id)arg1;

- (void).cxx_destruct;
- (long long)batchUpdateCount;
- (id)contentView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultBaselineRelativeLayoutMargins;
- (void)disableUnbatchedUpdates;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveLayoutMargins;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)leadingTextView;
- (void)observedPropertiesChanged;
- (id)observer;
- (void)performBatchUpdates:(id /* block */)arg1;
- (void)propertiesDidChange;
- (void)setBatchUpdateCount:(long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setTlkAppearance:(id)arg1;
- (id)setupContentView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tlkAppearance;
- (bool)usesDefaultLayoutMargins;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
