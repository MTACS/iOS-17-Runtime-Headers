
@interface SBActivateReachabilitySwitcherEventResponse : SBSwitcherModifierEventResponse {
    struct SBReachabilityActivationContext { 
        struct CGPoint { 
            double x; 
            double y; 
        } location; 
        struct CGPoint { 
            double x; 
            double y; 
        } translation; 
        struct CGPoint { 
            double x; 
            double y; 
        } velocity; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } viewBounds; 
        bool everTranslatedUpwards; 
    }  _reachabilityActivationContext;
}

@property (nonatomic, readonly) struct SBReachabilityActivationContext { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; bool x5; } reachabilityActivationContext;

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithReachabilityContext:(struct SBReachabilityActivationContext { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; bool x5; })arg1;
- (struct SBReachabilityActivationContext { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; bool x5; })reachabilityActivationContext;
- (long long)type;

@end
