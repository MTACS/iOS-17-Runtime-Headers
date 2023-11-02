
@interface CMDeviceMotionInternal : NSObject <NSCopying> {
    CMAttitude * fAttitude;
    bool  fDoingBiasEstimation;
    bool  fDoingYawCorrection;
    bool  fFusedWithVision;
    struct { 
        double x; 
        double y; 
        double z; 
    }  fGravity;
    float  fHeading;
    float  fHeadingAccuracy;
    struct { 
        double x; 
        double y; 
        double z; 
    }  fMagneticField;
    int  fMagneticFieldCalibrationLevel;
    struct { 
        double x; 
        double y; 
        double z; 
    }  fRotationRate;
    long long  fSensorLocation;
    struct { 
        double x; 
        double y; 
        double z; 
    }  fUserAcceleration;
    bool  fUsingVisionCorrections;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithDeviceMotion:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; int x5; bool x6; bool x7; bool x8; float x9; bool x10; bool x11; int x12; })arg1 internal:(struct { float x1; })arg2;
- (bool)isEqual:(id)arg1;
- (void)setDeviceMotion:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; int x5; bool x6; bool x7; bool x8; float x9; bool x10; bool x11; int x12; })arg1 internal:(struct { float x1; })arg2;

@end
