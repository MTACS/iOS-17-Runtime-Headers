
@interface UIHoverStyle : NSObject <NSCopying> {
    void _cachedBridgedEffect;
    void _cachedBridgedShape;
    void _effect;
    void _isEnabled;
    void _shape;
    void driverCoordinator;
    void view;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) <UIHoverEffect> *effect;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) UIShape *shape;
@property (nonatomic, readonly) NSString *verboseDescription;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)automaticStyle;
+ (id)styleWithEffect:(id)arg1 shape:(id)arg2;
+ (id)styleWithShape:(id)arg1;

- (void).cxx_destruct;
- (void)_invalidateAutomaticHoverEffect;
- (void)_invalidateAutomaticHoverShape;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (id)effect;
- (id)init;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setShape:(id)arg1;
- (id)shape;
- (id)styleWithEffect:(id)arg1 shape:(id)arg2;
- (id)styleWithShape:(id)arg1;
- (id)verboseDescription;

// Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore

+ (id)_doc_roundedRectWithCornerRadius:(double)arg1 cornerRadiusIsStretchy:(bool)arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
+ (id)doc_capsuleWithInset:(double)arg1;
+ (id)doc_capsuleWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)doc_circleWithInset:(double)arg1;
+ (id)doc_circleWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)doc_roundedRectWithConstantCornerRadius:(double)arg1 inset:(double)arg2;
+ (id)doc_roundedRectWithConstantCornerRadius:(double)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
+ (id)doc_roundedRectWithStretchyCornerRadius:(double)arg1 inset:(double)arg2;
+ (id)doc_roundedRectWithStretchyCornerRadius:(double)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

@end
