
@interface SBSwitcherDropRegionContext : NSObject <BSDescriptionProviding> {
    SBAppLayout * _closestVisibleAppLayout;
    unsigned long long  _currentDropRegion;
    SBAppLayout * _draggingAppLayout;
    long long  _draggingLayoutRole;
    SBAppLayout * _evictedAppLayout;
    SBAppLayout * _intersectingAppLayout;
    long long  _intersectingAppLayoutConfiguration;
    bool  _intersectingAppLayoutIsOnFirstRow;
    long long  _intersectingLayoutRole;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originRect;
    SBAppLayout * _remainingAppLayout;
    struct CGSize { 
        double width; 
        double height; 
    }  _scaledIntersectingAppLayoutSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _unscaledIntersectingAppLayoutSize;
}

@property (nonatomic, retain) SBAppLayout *closestVisibleAppLayout;
@property (nonatomic, readonly) unsigned long long currentDropAction;
@property (nonatomic) unsigned long long currentDropRegion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBAppLayout *draggingAppLayout;
@property (nonatomic, readonly) long long draggingLayoutRole;
@property (nonatomic, readonly) SBAppLayout *draggingLeafAppLayout;
@property (nonatomic, retain) SBAppLayout *evictedAppLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBAppLayout *intersectingAppLayout;
@property (nonatomic) long long intersectingAppLayoutConfiguration;
@property (nonatomic) bool intersectingAppLayoutIsOnFirstRow;
@property (nonatomic) long long intersectingLayoutRole;
@property (nonatomic, readonly) SBAppLayout *intersectingLeafAppLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } originRect;
@property (nonatomic, retain) SBAppLayout *remainingAppLayout;
@property (nonatomic) struct CGSize { double x1; double x2; } scaledIntersectingAppLayoutSize;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetRect;
@property (nonatomic) struct CGSize { double x1; double x2; } unscaledIntersectingAppLayoutSize;

- (void).cxx_destruct;
- (id)closestVisibleAppLayout;
- (unsigned long long)currentDropAction;
- (unsigned long long)currentDropRegion;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayItemsToReloadSnapshots;
- (id)draggingAppLayout;
- (long long)draggingLayoutRole;
- (id)draggingLeafAppLayout;
- (id)droppedLeafAppLayout;
- (long long)effectiveDroppingAppLayoutConfiguration;
- (id)evictedAppLayout;
- (id)finalTargetAppLayout;
- (id)initWithDraggingLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)intersectingAppLayout;
- (long long)intersectingAppLayoutConfiguration;
- (bool)intersectingAppLayoutIsOnFirstRow;
- (long long)intersectingLayoutRole;
- (id)intersectingLeafAppLayout;
- (bool)isSwap;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originRect;
- (id)remainingAppLayout;
- (struct CGSize { double x1; double x2; })scaledIntersectingAppLayoutSize;
- (void)setClosestVisibleAppLayout:(id)arg1;
- (void)setCurrentDropRegion:(unsigned long long)arg1;
- (void)setEvictedAppLayout:(id)arg1;
- (void)setIntersectingAppLayout:(id)arg1;
- (void)setIntersectingAppLayoutConfiguration:(long long)arg1;
- (void)setIntersectingAppLayoutIsOnFirstRow:(bool)arg1;
- (void)setIntersectingLayoutRole:(long long)arg1;
- (void)setOriginRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRemainingAppLayout:(id)arg1;
- (void)setScaledIntersectingAppLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUnscaledIntersectingAppLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRect;
- (struct CGSize { double x1; double x2; })unscaledIntersectingAppLayoutSize;

@end
