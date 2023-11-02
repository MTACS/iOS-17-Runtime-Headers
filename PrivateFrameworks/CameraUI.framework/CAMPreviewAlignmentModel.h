
@interface CAMPreviewAlignmentModel : NSObject {
    CMDeviceMotion * __referenceDeviceMotion;
    bool  _aligned;
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
    }  _alignmentTransform;
    <CAMPreviewAlignmentModelObserver> * _observer;
    double  _opacity;
}

@property (setter=_setReferenceDeviceMotion:, nonatomic, retain) CMDeviceMotion *_referenceDeviceMotion;
@property (getter=isAligned, setter=_setAligned:, nonatomic) bool aligned;
@property (setter=_setAlignmentTransform:, nonatomic) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } alignmentTransform;
@property (nonatomic) <CAMPreviewAlignmentModelObserver> *observer;
@property (setter=_setOpacity:, nonatomic) double opacity;

+ (double)desiredUpdateInterval;

- (void).cxx_destruct;
- (id)_referenceDeviceMotion;
- (void)_setAligned:(bool)arg1;
- (void)_setAlignmentTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)_setOpacity:(double)arg1;
- (void)_setReferenceDeviceMotion:(id)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })alignmentTransform;
- (void)applyDeviceMotion:(id)arg1;
- (id)init;
- (bool)isAligned;
- (id)observer;
- (double)opacity;
- (void)reset;
- (void)setObserver:(id)arg1;

@end
