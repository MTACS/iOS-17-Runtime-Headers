
@interface UIInputViewSetPlacement : NSObject <NSSecureCoding> {
    bool  _dirty;
    double  _extendedHeight;
    NSArray * _subPlacements;
    <UIInputViewSetPlacementDelegate> * delegate;
}

@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) UIInputViewSetPlacement *assistantView;
@property (nonatomic) <UIInputViewSetPlacementDelegate> *delegate;
@property (nonatomic) double extendedHeight;
@property (nonatomic, readonly) bool isCompactAssistantView;
@property (nonatomic, readonly) bool isFloating;
@property (nonatomic, readonly) bool isFloatingAssistantView;
@property (nonatomic, readonly) bool isHiddenForFloatingTransition;
@property (nonatomic, readonly) bool isInteractive;
@property (nonatomic, readonly) bool isUndocked;
@property (nonatomic, readonly) bool isVisible;
@property (nonatomic, readonly) bool requiresWindowBasedSafeAreaInsets;
@property (nonatomic, readonly) bool showsEditItems;
@property (nonatomic, readonly) bool showsInputOrAssistantViews;
@property (nonatomic, readonly) bool showsInputViews;
@property (nonatomic, readonly) bool showsKeyboard;
@property (nonatomic, retain) NSArray *subPlacements;

+ (id)deactivatedKeyboardPlacementWithCurrentPlacement:(id /* block */)arg1;
+ (id)encodablePlacementsForXPC;
+ (id)placement;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)accessoryViewWillAppear;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustBoundsForNotificationsWithOwner:(id)arg1;
- (double)alpha;
- (Class)applicatorClassForKeyboard:(bool)arg1;
- (id)applicatorInfoForOwner:(id)arg1;
- (id)assistantView;
- (void)checkSizeForOwner:(id)arg1;
- (unsigned long long)computeComparisonMask;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expiringPlacement;
- (double)extendedHeight;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (unsigned long long)indexForPurpose:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })inputAccessoryViewPadding;
- (double)inputAssistantViewHeightForInputViewSet:(id)arg1;
- (bool)inputViewWillAppear;
- (bool)isCompactAssistantView;
- (bool)isEqual:(id)arg1;
- (bool)isFloating;
- (bool)isFloatingAssistantView;
- (bool)isHiddenForFloatingTransition;
- (bool)isInteractive;
- (bool)isUndocked;
- (bool)isVisible;
- (unsigned long long)notificationsForTransitionToPlacement:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(bool)arg2;
- (bool)requiresWindowBasedSafeAreaInsets;
- (void)setDelegate:(id)arg1;
- (void)setDirty;
- (void)setExtendedHeight:(double)arg1;
- (void)setOtherPlacement:(id)arg1;
- (void)setSubPlacements:(id)arg1;
- (bool)showsEditItems;
- (bool)showsInputOrAssistantViews;
- (bool)showsInputViews;
- (bool)showsKeyboard;
- (id)subPlacements;
- (id)subPlacementsForInputViewSet:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end
