
@interface MRUCAPackageAsset : NSObject {
    NSString * _glyphState;
    CCUICAPackageDescription * _packageDescription;
    NSString * _packageName;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _permanentTransform;
}

@property (nonatomic, retain) NSString *glyphState;
@property (nonatomic, readonly) CAPackage *package;
@property (nonatomic, readonly) CCUICAPackageDescription *packageDescription;
@property (nonatomic, readonly) NSString *packageName;
@property (nonatomic) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } permanentTransform;

+ (id)packageNamed:(id)arg1;
+ (id)packageNamed:(id)arg1 glyphState:(id)arg2;
+ (id)packageNamed:(id)arg1 glyphState:(id)arg2 permanentTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg3;

- (void).cxx_destruct;
- (id)description;
- (id)glyphState;
- (id)initWithPackageName:(id)arg1;
- (id)initWithPackageName:(id)arg1 glyphState:(id)arg2;
- (id)initWithPackageName:(id)arg1 glyphState:(id)arg2 permanentTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg3;
- (bool)isEqual:(id)arg1;
- (id)package;
- (id)packageDescription;
- (id)packageName;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })permanentTransform;
- (void)setGlyphState:(id)arg1;
- (void)setPermanentTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;

@end
