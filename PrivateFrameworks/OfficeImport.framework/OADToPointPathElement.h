
@interface OADToPointPathElement : OADPathElement {
    bool  mRelative;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } y; 
    }  mToPoint;
}

- (id)initWithToPoint:(struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })arg1;
- (bool)relative;
- (void)setRelative:(bool)arg1;
- (struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })toPoint;

@end
