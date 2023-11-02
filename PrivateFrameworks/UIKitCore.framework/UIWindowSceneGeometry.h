
@interface UIWindowSceneGeometry : NSObject <NSCopying> {
    long long  _interfaceOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumSize;
    long long  _resizingRestrictions;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _systemFrame;
}

@property (setter=_setInterfaceOrientation:, nonatomic) long long interfaceOrientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumSize;
@property (nonatomic, readonly) long long resizingRestrictions;
@property (setter=_setSystemFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } systemFrame;

+ (id)_calculateEffectiveGeometryForWindowScene:(id)arg1;

- (id)_init;
- (void)_setInterfaceOrientation:(long long)arg1;
- (void)_setSystemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)interfaceOrientation;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumSize;
- (struct CGSize { double x1; double x2; })minimumSize;
- (long long)resizingRestrictions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })systemFrame;

@end
