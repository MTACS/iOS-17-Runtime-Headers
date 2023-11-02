
@interface PXGViewEnvironment : NSObject <NSCopying> {
    bool  _accessibilityEnabled;
    UIColor * _backgroundColor;
    struct CGColor { } * _checkmarkColor;
    bool  _checkmarkEmphasized;
    bool  _emphasized;
    struct CGColor { } * _focusRingColor;
    bool  _isBeingFullPageSnapshotted;
    UIColor * _tintColor;
    UITraitCollection * _traitCollection;
    long long  _userInterfaceStyle;
    bool  _wantsFocusRing;
}

@property (nonatomic, readonly) bool accessibilityEnabled;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) struct CGColor { }*checkmarkColor;
@property (nonatomic, readonly) bool checkmarkEmphasized;
@property (nonatomic, readonly) bool emphasized;
@property (nonatomic, readonly) struct CGColor { }*focusRingColor;
@property (nonatomic, readonly) bool isBeingFullPageSnapshotted;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) bool wantsFocusRing;

- (void).cxx_destruct;
- (bool)accessibilityEnabled;
- (id)backgroundColor;
- (struct CGColor { }*)checkmarkColor;
- (bool)checkmarkEmphasized;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)emphasized;
- (struct CGColor { }*)focusRingColor;
- (bool)hasDifferentColorAppearanceComparedTo:(id)arg1;
- (id)initWithView:(id)arg1 accessibilityEnabled:(bool)arg2 isBeingFullPageSnapshotted:(bool)arg3;
- (bool)isBeingFullPageSnapshotted;
- (bool)isEqual:(id)arg1;
- (id)tintColor;
- (id)traitCollection;
- (long long)userInterfaceStyle;
- (bool)wantsFocusRing;

@end
