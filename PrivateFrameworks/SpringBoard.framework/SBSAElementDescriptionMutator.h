
@interface SBSAElementDescriptionMutator : NSObject <SAUIElementSubcomponentPreferencesAccepting, SAUIElementViewPreferencesAccepting> {
    SBSAElementDescription * _elementDescription;
}

@property (nonatomic) int appearState;
@property (nonatomic, copy) <SAElementIdentifying> *associatedSystemApertureElementIdentity;
@property (nonatomic) double customContentAlpha;
@property (nonatomic) double customContentBlurProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *interfaceElementIdentifier;
@property (nonatomic) double leadingViewAlpha;
@property (nonatomic) double leadingViewBlurProgress;
@property (nonatomic) struct CGSize { double x1; double x2; } leadingViewScale;
@property (nonatomic) double leadingViewSquishProgress;
@property (nonatomic) double minimalViewAlpha;
@property (nonatomic) double minimalViewBlurProgress;
@property (nonatomic) struct CGSize { double x1; double x2; } minimalViewScale;
@property (nonatomic) double minimalViewSquishProgress;
@property (nonatomic) double sensorObscuringShadowProgress;
@property (nonatomic, copy) NSString *snapshotReason;
@property (nonatomic) double snapshotViewAlpha;
@property (nonatomic) double snapshotViewBlurProgress;
@property (readonly) Class superclass;
@property (nonatomic) double trailingViewAlpha;
@property (nonatomic) double trailingViewBlurProgress;
@property (nonatomic) struct CGSize { double x1; double x2; } trailingViewScale;
@property (nonatomic) double trailingViewSquishProgress;

- (void).cxx_destruct;
- (int)appearState;
- (id)associatedSystemApertureElementIdentity;
- (double)customContentAlpha;
- (double)customContentBlurProgress;
- (id)description;
- (id)initWithElementDescription:(id)arg1;
- (id)interfaceElementIdentifier;
- (double)leadingViewAlpha;
- (double)leadingViewBlurProgress;
- (struct CGSize { double x1; double x2; })leadingViewScale;
- (double)leadingViewSquishProgress;
- (double)minimalViewAlpha;
- (double)minimalViewBlurProgress;
- (struct CGSize { double x1; double x2; })minimalViewScale;
- (double)minimalViewSquishProgress;
- (double)sensorObscuringShadowProgress;
- (void)setAppearState:(int)arg1;
- (void)setAssociatedSystemApertureElementIdentity:(id)arg1;
- (void)setCustomContentAlpha:(double)arg1;
- (void)setCustomContentBlurProgress:(double)arg1;
- (void)setInterfaceElementIdentifier:(id)arg1;
- (void)setLeadingViewAlpha:(double)arg1;
- (void)setLeadingViewBlurProgress:(double)arg1;
- (void)setLeadingViewScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setLeadingViewSquishProgress:(double)arg1;
- (void)setMinimalViewAlpha:(double)arg1;
- (void)setMinimalViewBlurProgress:(double)arg1;
- (void)setMinimalViewScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimalViewSquishProgress:(double)arg1;
- (void)setSensorObscuringShadowProgress:(double)arg1;
- (void)setSnapshotReason:(id)arg1;
- (void)setSnapshotViewAlpha:(double)arg1;
- (void)setSnapshotViewBlurProgress:(double)arg1;
- (void)setTrailingViewAlpha:(double)arg1;
- (void)setTrailingViewBlurProgress:(double)arg1;
- (void)setTrailingViewScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setTrailingViewSquishProgress:(double)arg1;
- (id)snapshotReason;
- (double)snapshotViewAlpha;
- (double)snapshotViewBlurProgress;
- (double)trailingViewAlpha;
- (double)trailingViewBlurProgress;
- (struct CGSize { double x1; double x2; })trailingViewScale;
- (double)trailingViewSquishProgress;

@end
