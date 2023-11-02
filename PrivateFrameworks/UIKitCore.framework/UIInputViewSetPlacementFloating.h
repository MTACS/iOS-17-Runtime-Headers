
@interface UIInputViewSetPlacementFloating : UIInputViewSetPlacementUndocked <NSSecureCoding, _UIGeometryChangeObserver> {
    UIInputViewSetPlacementOnScreen * _cachedSecondaryPlacement;
    double  _floatingWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _responderRect;
    UIView * _responderToFollow;
    NSArray * _subPlacements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double floatingWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIResponder *responderToFollow;
@property (readonly) Class superclass;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameAtOffset:(struct CGPoint { double x1; double x2; })arg1 keyboardSize:(struct CGSize { double x1; double x2; })arg2 screenSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)infoWithPoint:(struct CGPoint { double x1; double x2; })arg1 forOwner:(id)arg2;
+ (id)placementWithUndockedOffset:(struct CGPoint { double x1; double x2; })arg1 chromeBuffer:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 floatingWidth:(double)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_geometryChanged:(const struct { int x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CATransform3D { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; double x_6_1_6; double x_6_1_7; double x_6_1_8; double x_6_1_9; double x_6_1_10; double x_6_1_11; double x_6_1_12; double x_6_1_13; double x_6_1_14; double x_6_1_15; double x_6_1_16; } x6; id x7; id x8; id x9; id x10; }*)arg1 forAncestor:(id)arg2;
- (bool)accessoryViewWillAppear;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustBoundsForNotificationsWithOwner:(id)arg1;
- (Class)applicatorClassForKeyboard:(bool)arg1;
- (id)applicatorInfoForOwner:(id)arg1;
- (id)assistantView;
- (void)checkSizeForOwner:(id)arg1;
- (id)currentResponderView;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)expiringPlacement;
- (double)floatingWidth;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (unsigned long long)indexForPurpose:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFloating;
- (bool)isFloatingAssistantView;
- (id)responderToFollow;
- (void)setDelegate:(id)arg1;
- (void)setFloatingWidth:(double)arg1;
- (void)setResponderToFollow:(id)arg1;
- (void)setSubPlacements:(id)arg1;
- (bool)showsEditItems;
- (id)subPlacements;
- (void)updateChromeBuffer;
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end
