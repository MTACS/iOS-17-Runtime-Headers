
@interface GQDBezierLine : NSObject {
    bool  isOutsideToLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  mLower;
    struct CGPoint { 
        double x; 
        double y; 
    }  mUpper;
}

@end
