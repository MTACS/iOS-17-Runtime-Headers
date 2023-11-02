
@interface ADFlowFrameInput : NSObject {
    struct __CVBuffer { } * _color;
    ADJasperPointCloud * _pointCloud;
}

@property (nonatomic, readonly) struct __CVBuffer { }*color;
@property (nonatomic, readonly, retain) ADJasperPointCloud *pointCloud;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)color;
- (void)dealloc;
- (id)pointCloud;
- (void)setColor:(struct __CVBuffer { }*)arg1;
- (void)setPointCloud:(id)arg1;

@end
