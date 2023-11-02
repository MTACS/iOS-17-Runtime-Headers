
@interface FigCaptureCameraCalibrationDataSinkConfiguration : FigCaptureSinkConfiguration {
    bool  _discardsLateCameraCalibrationData;
}

@property (nonatomic) bool discardsLateCameraCalibrationData;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)description;
- (bool)discardsLateCameraCalibrationData;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDiscardsLateCameraCalibrationData:(bool)arg1;
- (int)sinkType;

@end
