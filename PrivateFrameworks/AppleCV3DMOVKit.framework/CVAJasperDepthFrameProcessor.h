
@interface CVAJasperDepthFrameProcessor : NSObject {
    JDDepthProcessor * _jdProc;
}

@property (nonatomic, retain) JDDepthProcessor *jdProc;

- (void).cxx_destruct;
- (id)initWithCalibrationDict:(id)arg1;
- (id)jdProc;
- (id)process:(struct __CVBuffer { }*)arg1;
- (void)setJdProc:(id)arg1;

@end
