
@interface SBReusableSnapshotItemContainer : SBFluidSwitcherItemContainer <SBFluidSwitcherItemContainerReusable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_snapshotView;
- (void)_updateSnapshotViewWithAppLayout:(id)arg1;
- (void)conformsToProtocolSBFluidSwitcherItemContainerReusable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 appLayout:(id)arg2 delegate:(id)arg3 active:(bool)arg4 windowScene:(id)arg5;
- (void)prepareForReuse;
- (void)setAppLayout:(id)arg1;
- (void)setContentView:(id)arg1;

@end
