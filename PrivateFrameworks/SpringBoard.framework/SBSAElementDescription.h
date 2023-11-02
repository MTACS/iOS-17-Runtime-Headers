
@interface SBSAElementDescription : NSObject <NSCopying, SAUIElementSubcomponentPreferencesProviding, SAUIElementViewPreferencesProviding, SAUISnapshotReasonProviding, SBSABlockMutating, SBSAInterfaceElementIdentifying> {
    int  _appearState;
    <SAElementIdentifying> * _associatedSystemApertureElementIdentity;
    double  _customContentAlpha;
    double  _customContentBlurProgress;
    NSUUID * _interfaceElementIdentifier;
    double  _leadingViewAlpha;
    double  _leadingViewBlurProgress;
    struct CGSize { 
        double width; 
        double height; 
    }  _leadingViewScale;
    double  _leadingViewSquishProgress;
    double  _minimalViewAlpha;
    double  _minimalViewBlurProgress;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimalViewScale;
    double  _minimalViewSquishProgress;
    double  _sensorObscuringShadowProgress;
    NSString * _snapshotReason;
    double  _snapshotViewAlpha;
    double  _snapshotViewBlurProgress;
    double  _trailingViewAlpha;
    double  _trailingViewBlurProgress;
    struct CGSize { 
        double width; 
        double height; 
    }  _trailingViewScale;
    double  _trailingViewSquishProgress;
}

@property (setter=_setAppearState:, nonatomic) int appearState;
@property (setter=_setAssociatedSystemApertureElementIdentity:, nonatomic, copy) <SAElementIdentifying> *associatedSystemApertureElementIdentity;
@property (setter=_setCustomContentAlpha:, nonatomic) double customContentAlpha;
@property (setter=_setCustomContentBlurProgress:, nonatomic) double customContentBlurProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setInterfaceElementIdentifier:, nonatomic, copy) NSUUID *interfaceElementIdentifier;
@property (setter=_setLeadingViewAlpha:, nonatomic) double leadingViewAlpha;
@property (setter=_setLeadingViewBlurProgress:, nonatomic) double leadingViewBlurProgress;
@property (setter=_setLeadingViewScale:, nonatomic) struct CGSize { double x1; double x2; } leadingViewScale;
@property (setter=_setLeadingViewSquishProgress:, nonatomic) double leadingViewSquishProgress;
@property (setter=_setMinimalViewAlpha:, nonatomic) double minimalViewAlpha;
@property (setter=_setMinimalViewBlurProgress:, nonatomic) double minimalViewBlurProgress;
@property (setter=_setMinimalViewScale:, nonatomic) struct CGSize { double x1; double x2; } minimalViewScale;
@property (setter=_setMinimalViewSquishProgress:, nonatomic) double minimalViewSquishProgress;
@property (setter=_setSensorObscuringShadowProgress:, nonatomic) double sensorObscuringShadowProgress;
@property (setter=_setSnapshotReason:, nonatomic, copy) NSString *snapshotReason;
@property (setter=_setSnapshotViewAlpha:, nonatomic) double snapshotViewAlpha;
@property (setter=_setSnapshotViewBlurProgress:, nonatomic) double snapshotViewBlurProgress;
@property (readonly) Class superclass;
@property (setter=_setTrailingViewAlpha:, nonatomic) double trailingViewAlpha;
@property (setter=_setTrailingViewBlurProgress:, nonatomic) double trailingViewBlurProgress;
@property (setter=_setTrailingViewScale:, nonatomic) struct CGSize { double x1; double x2; } trailingViewScale;
@property (setter=_setTrailingViewSquishProgress:, nonatomic) double trailingViewSquishProgress;

+ (id)instanceWithBlock:(id /* block */)arg1;
+ (Class)mutatorClass;

- (void).cxx_destruct;
- (void)_setAppearState:(int)arg1;
- (void)_setAssociatedSystemApertureElementIdentity:(id)arg1;
- (void)_setCustomContentAlpha:(double)arg1;
- (void)_setCustomContentBlurProgress:(double)arg1;
- (void)_setInterfaceElementIdentifier:(id)arg1;
- (void)_setLeadingViewAlpha:(double)arg1;
- (void)_setLeadingViewBlurProgress:(double)arg1;
- (void)_setLeadingViewScale:(struct CGSize { double x1; double x2; })arg1;
- (void)_setLeadingViewSquishProgress:(double)arg1;
- (void)_setMinimalViewAlpha:(double)arg1;
- (void)_setMinimalViewBlurProgress:(double)arg1;
- (void)_setMinimalViewScale:(struct CGSize { double x1; double x2; })arg1;
- (void)_setMinimalViewSquishProgress:(double)arg1;
- (void)_setSensorObscuringShadowProgress:(double)arg1;
- (void)_setSnapshotReason:(id)arg1;
- (void)_setSnapshotViewAlpha:(double)arg1;
- (void)_setSnapshotViewBlurProgress:(double)arg1;
- (void)_setTrailingViewAlpha:(double)arg1;
- (void)_setTrailingViewBlurProgress:(double)arg1;
- (void)_setTrailingViewScale:(struct CGSize { double x1; double x2; })arg1;
- (void)_setTrailingViewSquishProgress:(double)arg1;
- (int)appearState;
- (id)associatedSystemApertureElementIdentity;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)customContentAlpha;
- (double)customContentBlurProgress;
- (id)description;
- (unsigned long long)hash;
- (id)interfaceElementIdentifier;
- (bool)isEqual:(id)arg1;
- (double)leadingViewAlpha;
- (double)leadingViewBlurProgress;
- (struct CGSize { double x1; double x2; })leadingViewScale;
- (double)leadingViewSquishProgress;
- (double)minimalViewAlpha;
- (double)minimalViewBlurProgress;
- (struct CGSize { double x1; double x2; })minimalViewScale;
- (double)minimalViewSquishProgress;
- (double)sensorObscuringShadowProgress;
- (id)snapshotReason;
- (double)snapshotViewAlpha;
- (double)snapshotViewBlurProgress;
- (double)trailingViewAlpha;
- (double)trailingViewBlurProgress;
- (struct CGSize { double x1; double x2; })trailingViewScale;
- (double)trailingViewSquishProgress;

@end
