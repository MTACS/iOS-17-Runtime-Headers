
@interface _UIStatusBarSignalViewCacheKey : NSObject <NSCopying> {
    bool  _alternate;
    Class  _classType;
    double  _lineWidth;
    double  _radius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    double  _scale;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _secondaryRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _secondarySize;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithClass:(Class)arg1 size:(struct CGSize { double x1; double x2; })arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 radius:(double)arg4 lineWidth:(double)arg5 alternate:(bool)arg6 scale:(double)arg7;
- (id)initWithClass:(Class)arg1 size:(struct CGSize { double x1; double x2; })arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 radius:(double)arg4 lineWidth:(double)arg5 secondarySize:(struct CGSize { double x1; double x2; })arg6 secondaryRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 alternate:(bool)arg8 scale:(double)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCacheKey:(id)arg1;

@end
