
@interface SBFloatingDragAndDropGestureSwitcherModifier : SBGestureSwitcherModifier {
    long long  _currentDropAction;
    long long  _floatingConfiguration;
    bool  _floatingSwitcherVisible;
    long long  _interfaceOrientation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _platterFrame;
    double  _platterScale;
}

- (bool)_isPlatterPreviewIntersectingFloatingApplication;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerViewBounds;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1 floatingSwitcherVisible:(bool)arg2 floatingConfiguration:(long long)arg3 interfaceOrientation:(long long)arg4;
- (double)scaleForIndex:(unsigned long long)arg1;

@end
