
@interface JDCloudColorCalibrationDebugData : NSObject {
    NSDictionary * _debugDict;
    struct __CVBuffer { } * _debugImage;
    NSData * _debugPointCloud;
    unsigned int  _debugPointCloudSize;
}

@property (nonatomic, readonly) NSDictionary *debugDict;
@property (nonatomic, readonly) struct __CVBuffer { }*debugImage;
@property (nonatomic, readonly) NSData *debugPointCloud;
@property (nonatomic, readonly) unsigned int debugPointCloudSize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDict;
- (struct __CVBuffer { }*)debugImage;
- (id)debugPointCloud;
- (unsigned int)debugPointCloudSize;
- (id)initWithDebugImage:(struct __CVBuffer { }*)arg1 pointCloud:(id)arg2 pointCloudSize:(unsigned int)arg3;

@end
