
@interface _UIListSeparatorConfiguration : UIListSeparatorConfiguration {
    bool  _adjustColorForMultipleSelection;
    long long  _hidingBehavior;
    long long  _insetAdjustmentBehavior;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _insetsForBoundarySeparators;
}

@property (getter=_shouldAdjustColorForMultipleSelection, setter=_setAdjustColorForMultipleSelection:, nonatomic) bool _adjustColorForMultipleSelection;
@property (getter=_color, setter=_setColor:, nonatomic, retain) UIColor *_color;
@property (getter=_hidingBehavior, setter=_setHidingBehavior:, nonatomic) long long _hidingBehavior;
@property (getter=_insetAdjustmentBehaviour, setter=_setInsetAdjustmentBehavior:, nonatomic) long long _insetAdjustmentBehavior;
@property (getter=_insets, setter=_setInsets:, nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } _insets;
@property (getter=_insetsForBoundarySeparators, setter=_setInsetsForBoundarySeparators:, nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } _insetsForBoundarySeparators;
@property (getter=_multipleSelectionColor, setter=_setMultipleSelectionColor:, nonatomic, retain) UIColor *_multipleSelectionColor;

+ (id)_configurationForAppearanceStyle:(long long)arg1 inLayoutEnvironment:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)_color;
- (long long)_hidingBehavior;
- (long long)_insetAdjustmentBehaviour;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_insets;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_insetsForBoundarySeparators;
- (id)_multipleSelectionColor;
- (void)_setAdjustColorForMultipleSelection:(bool)arg1;
- (void)_setColor:(id)arg1;
- (void)_setHidingBehavior:(long long)arg1;
- (void)_setInsetAdjustmentBehavior:(long long)arg1;
- (void)_setInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setInsetsForBoundarySeparators:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setMultipleSelectionColor:(id)arg1;
- (bool)_shouldAdjustColorForMultipleSelection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
