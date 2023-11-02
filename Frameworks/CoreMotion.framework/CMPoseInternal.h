
@interface CMPoseInternal : NSObject <NSCopying> {
    CMAttitude * fAttitude;
    double  fConsumedAuxTimestamp;
    double  fMachAbsTimestamp;
    double  fReceivedAuxTimestamp;
    struct { 
        double x; 
        double y; 
        double z; 
    }  fTranslation;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithPose:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; double x3; double x4; double x5; })arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPoseInternal:(id)arg1;

@end
