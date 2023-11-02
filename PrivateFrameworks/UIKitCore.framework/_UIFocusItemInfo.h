
@interface _UIFocusItemInfo : NSObject <NSCopying> {
    NSArray * _ancestorEnvironmentScrollableContainers;
    UIView * _containingView;
    struct { 
        unsigned int hasResolvedFocusSound : 1; 
        unsigned int hasResolvedFocusSoundPan : 1; 
        unsigned int hasResolvedFocusTouchSensitivityStyle : 1; 
        unsigned int hasResolvedFocusMovementFlippedHorizontally : 1; 
        unsigned int hasResolvedFocusedRegion : 1; 
        unsigned int hasResolvedRotaryFocusMovementAxis : 1; 
        unsigned int useFallbackAncestorScroller : 1; 
    }  _flags;
    bool  _focusMovementFlippedHorizontally;
    long long  _focusSound;
    long long  _focusTouchSensitivityStyle;
    _UIFocusRegion * _focusedRegion;
    long long  _inheritedFocusMovementStyle;
    <UIFocusItem> * _item;
    long long  _rotaryFocusMovementAxis;
}

@property (nonatomic, readonly, copy) NSArray *ancestorEnvironmentScrollableContainers;
@property (nonatomic, readonly) UIView *containingView;
@property (getter=isFocusMovementFlippedHorizontally, nonatomic, readonly) bool focusMovementFlippedHorizontally;
@property (nonatomic, readonly) long long focusSound;
@property (nonatomic, readonly) long long focusTouchSensitivityStyle;
@property (nonatomic, readonly) _UIFocusRegion *focusedRegion;
@property (nonatomic, readonly) long long inheritedFocusMovementStyle;
@property (nonatomic, readonly) <UIFocusItem> *item;
@property (nonatomic, readonly) bool itemIsKindOfView;
@property (nonatomic, readonly) long long rotaryFocusMovementAxis;
@property (nonatomic, readonly) bool useFallbackAncestorScroller;

+ (id)infoWithItem:(id)arg1;
+ (id)infoWithItem:(id)arg1 useFallbackAncestorScroller:(bool)arg2;
+ (id)infoWithView:(id)arg1;

- (void).cxx_destruct;
- (id)_createFocusedRegion;
- (id)_initWithItem:(id)arg1 containingView:(id)arg2 useFallbackAncestorScroller:(bool)arg3;
- (id)ancestorEnvironmentScrollableContainers;
- (id)containingView;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)focusSound;
- (long long)focusTouchSensitivityStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusedRectInCoordinateSpace:(id)arg1;
- (id)focusedRegion;
- (long long)inheritedFocusMovementStyle;
- (void)invalidateFocusedRegion;
- (bool)isFocusMovementFlippedHorizontally;
- (id)item;
- (bool)itemIsKindOfView;
- (long long)rotaryFocusMovementAxis;
- (id)shortDescription;
- (bool)useFallbackAncestorScroller;

@end
