
@interface FigCameraCalibrationDataCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {
    bool  _mirroringEnabled;
    int  _orientation;
}

@property (nonatomic) bool mirroringEnabled;
@property (nonatomic) int orientation;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)description;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)mirroringEnabled;
- (int)orientation;
- (void)setMirroringEnabled:(bool)arg1;
- (void)setOrientation:(int)arg1;

@end
