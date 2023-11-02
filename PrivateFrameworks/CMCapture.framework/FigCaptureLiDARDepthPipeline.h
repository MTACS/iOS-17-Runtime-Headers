
@interface FigCaptureLiDARDepthPipeline : FigCapturePipeline {
    NSDictionary * _cameraInfoByPortType;
    BWFigVideoCaptureDevice * _captureDevice;
    FigDepthDataCaptureConnectionConfiguration * _depthDataCaptureConnectionConfiguration;
    bool  _depthDataFilteringEnabled;
    struct { 
        int width; 
        int height; 
    }  _depthOutputDimensions;
    unsigned int  _depthPixelFormat;
    BWDepthRotatorNode * _depthRotatorNode;
    BWPointCloudDensificationNode * _pointCloudDensificationNode;
    int  _rgbCameraHorizontalSensorBinningFactor;
    NSString * _rgbCameraSourceID;
    int  _rgbCameraVerticalSensorBinningFactor;
    NSDictionary * _sensorIDStringsByPortType;
    BWVideoPointCloudSynchronizerNode * _synchronizerNode;
}

@property (nonatomic, readonly) BWNodeOutput *depthDataSinkOutput;
@property (nonatomic, readonly) NSString *rgbCameraSourceID;

+ (void)initialize;

- (int)_buildLiDARDepthPipelineWithVideoSourceCaptureOutput:(id)arg1 pointCloudOutput:(id)arg2 graph:(id)arg3 videoInputDimensions:(struct { int x1; int x2; })arg4 timeOfFlightCameraType:(int)arg5;
- (void)dealloc;
- (id)depthDataSinkOutput;
- (id)initWithCaptureDevice:(id)arg1 cameraInfoByPortType:(id)arg2 sensorIDStringsByPortType:(id)arg3 timeOfFlightCameraType:(int)arg4 depthDataCaptureConnectionConfiguration:(id)arg5 videoSourceCaptureOutput:(id)arg6 pointCloudOutput:(id)arg7 graph:(id)arg8 name:(id)arg9 rgbCameraSourceID:(id)arg10 errorOut:(int*)arg11;
- (id)rgbCameraSourceID;

@end
