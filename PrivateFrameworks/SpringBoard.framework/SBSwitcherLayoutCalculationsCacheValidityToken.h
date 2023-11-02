
@interface SBSwitcherLayoutCalculationsCacheValidityToken : NSObject {
    unsigned long long  _appLayoutsGenCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _containerViewBounds;
    unsigned long long  _continuousExposeIdentifiersGenCount;
    unsigned long long  _modifierEventGenCount;
    long long  _switcherInterfaceOrientation;
}

@property (nonatomic) unsigned long long appLayoutsGenCount;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containerViewBounds;
@property (nonatomic) unsigned long long continuousExposeIdentifiersGenCount;
@property (nonatomic) unsigned long long modifierEventGenCount;
@property (nonatomic) long long switcherInterfaceOrientation;

- (unsigned long long)appLayoutsGenCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerViewBounds;
- (unsigned long long)continuousExposeIdentifiersGenCount;
- (id)initWithAppLayoutsGenCount:(unsigned long long)arg1 continuousExposeIdentifiersGenCount:(unsigned long long)arg2 switcherInterfaceOrientation:(long long)arg3 containerViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 modifierEventGenCount:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (unsigned long long)modifierEventGenCount;
- (void)setAppLayoutsGenCount:(unsigned long long)arg1;
- (void)setContainerViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContinuousExposeIdentifiersGenCount:(unsigned long long)arg1;
- (void)setModifierEventGenCount:(unsigned long long)arg1;
- (void)setSwitcherInterfaceOrientation:(long long)arg1;
- (long long)switcherInterfaceOrientation;

@end
