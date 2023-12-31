
@interface OADAdjustRect : NSObject {
    struct OADAdjustCoord { 
        bool isFormulaResult; 
        int value; 
    }  mBottom;
    struct OADAdjustCoord { 
        bool isFormulaResult; 
        int value; 
    }  mLeft;
    struct OADAdjustCoord { 
        bool isFormulaResult; 
        int value; 
    }  mRight;
    struct OADAdjustCoord { 
        bool isFormulaResult; 
        int value; 
    }  mTop;
}

- (struct OADAdjustCoord { bool x1; int x2; })bottom;
- (id)description;
- (id)initWithLeft:(struct OADAdjustCoord { bool x1; int x2; })arg1 top:(struct OADAdjustCoord { bool x1; int x2; })arg2 right:(struct OADAdjustCoord { bool x1; int x2; })arg3 bottom:(struct OADAdjustCoord { bool x1; int x2; })arg4;
- (struct OADAdjustCoord { bool x1; int x2; })left;
- (struct OADAdjustCoord { bool x1; int x2; })right;
- (struct OADAdjustCoord { bool x1; int x2; })top;

@end
