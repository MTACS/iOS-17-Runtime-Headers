
@interface SBSAViewDescription : NSObject <NSCopying, SBSABlockMutating, SBSAInterfaceElementDescribing> {
    double  _alpha;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundsVelocity;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    double  _cornerRadius;
    NSUUID * _interfaceElementIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _scale;
}

@property (setter=_setAlpha:, nonatomic) double alpha;
@property (nonatomic, readonly) double blurRadius;
@property (setter=_setBounds:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (setter=_setBoundsVelocity:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundsVelocity;
@property (setter=_setCenter:, nonatomic) struct CGPoint { double x1; double x2; } center;
@property (setter=_setCornerRadius:, nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setInterfaceElementIdentifier:, nonatomic, copy) NSUUID *interfaceElementIdentifier;
@property (setter=_setScale:, nonatomic) struct CGSize { double x1; double x2; } scale;
@property (readonly) Class superclass;

+ (id)instanceWithBlock:(id /* block */)arg1;
+ (Class)mutatorClass;

- (void).cxx_destruct;
- (void)_setAlpha:(double)arg1;
- (void)_setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setBoundsVelocity:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_setInterfaceElementIdentifier:(id)arg1;
- (void)_setScale:(struct CGSize { double x1; double x2; })arg1;
- (double)alpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsVelocity;
- (struct CGPoint { double x1; double x2; })center;
- (id)copyByPixelAligningGeometryWithScale:(double)arg1;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)description;
- (unsigned long long)hash;
- (id)initWithViewDescription:(id)arg1;
- (id)interfaceElementIdentifier;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })scale;

@end
