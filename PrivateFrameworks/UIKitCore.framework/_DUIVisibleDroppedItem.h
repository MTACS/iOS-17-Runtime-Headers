
@interface _DUIVisibleDroppedItem : NSObject <NSSecureCoding> {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _appliedTransform;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    bool  _constrainSize;
    bool  _flipped;
    _DUIImageComponent * _imageComponent;
    unsigned long long  _itemIndex;
    bool  _precisionMode;
    _DUIPreview * _preview;
    double  _rotation;
    union { 
        struct { 
            double x; 
            double y; 
            double z; 
        } ; 
        /* Warning: Unrecognized filer type: ')' using 'void*' */ void*vector; 
    }  _targetVelocity3D;
    union { 
        struct { 
            double x; 
            double y; 
            double z; 
        } ; 
        /* Warning: Unrecognized filer type: ')' using 'void*' */ void*vector; 
    }  _velocity3D;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } appliedTransform;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic) bool constrainSize;
@property (nonatomic) bool flipped;
@property (nonatomic, retain) _DUIImageComponent *imageComponent;
@property (nonatomic) unsigned long long itemIndex;
@property (nonatomic) bool precisionMode;
@property (nonatomic, copy) _DUIPreview *preview;
@property (nonatomic) double rotation;
@property (nonatomic) struct CGVector { double x1; double x2; } targetVelocity;
@property (nonatomic) union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; } targetVelocity3D;
@property (nonatomic) struct CGVector { double x1; double x2; } velocity;
@property (nonatomic) union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; } velocity3D;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })appliedTransform;
- (struct CGPoint { double x1; double x2; })center;
- (bool)constrainSize;
- (id)createSnapshotView;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)flipped;
- (id)imageComponent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemIndex;
- (bool)precisionMode;
- (id)preview;
- (double)rotation;
- (void)setAppliedTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setConstrainSize:(bool)arg1;
- (void)setFlipped:(bool)arg1;
- (void)setImageComponent:(id)arg1;
- (void)setItemIndex:(unsigned long long)arg1;
- (void)setPrecisionMode:(bool)arg1;
- (void)setPreview:(id)arg1;
- (void)setRotation:(double)arg1;
- (void)setTargetVelocity3D:(union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; })arg1;
- (void)setTargetVelocity:(struct CGVector { double x1; double x2; })arg1;
- (void)setVelocity3D:(union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; })arg1;
- (void)setVelocity:(struct CGVector { double x1; double x2; })arg1;
- (struct CGVector { double x1; double x2; })targetVelocity;
- (union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; })targetVelocity3D;
- (struct CGVector { double x1; double x2; })velocity;
- (union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; })velocity3D;

@end
