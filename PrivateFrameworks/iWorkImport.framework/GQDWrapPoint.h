
@interface GQDWrapPoint : NSObject {
    float  mDistance;
    GQDDrawable * mDrawable;
    int  mFlowType;
    struct CGPoint { 
        double x; 
        double y; 
    }  mPoint;
    int  mZIndex;
}

- (long long)comparePoint:(id)arg1;
- (id)initWithX:(float)arg1 y:(float)arg2 flowType:(int)arg3 drawable:(id)arg4;
- (int)zIndex;

@end
