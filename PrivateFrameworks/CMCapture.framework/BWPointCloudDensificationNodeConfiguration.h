
@interface BWPointCloudDensificationNodeConfiguration : NSObject {
    struct { 
        int width; 
        int height; 
    }  _depthOutputDimensions;
    unsigned int  _depthPixelFormat;
    bool  _filteringEnabled;
    int  _rgbCameraHorizontalSensorBinningFactor;
    int  _rgbCameraVerticalSensorBinningFactor;
    BWSensorConfiguration * _rgbSensorConfiguration;
    int  _timeOfFlightCameraType;
    BWSensorConfiguration * _timeOfFlightSensorConfiguration;
    struct { 
        int width; 
        int height; 
    }  _videoInputDimensions;
}

@property (nonatomic, readonly) struct { int x1; int x2; } depthOutputDimensions;
@property (nonatomic, readonly) unsigned int depthPixelFormat;
@property (nonatomic, readonly) bool filteringEnabled;
@property (nonatomic, readonly) int rgbCameraHorizontalSensorBinningFactor;
@property (nonatomic, readonly) int rgbCameraVerticalSensorBinningFactor;
@property (nonatomic, readonly) BWSensorConfiguration *rgbSensorConfiguration;
@property (nonatomic, readonly) int timeOfFlightCameraType;
@property (nonatomic, readonly) BWSensorConfiguration *timeOfFlightSensorConfiguration;
@property (nonatomic, readonly) struct { int x1; int x2; } videoInputDimensions;

- (void)dealloc;
- (struct { int x1; int x2; })depthOutputDimensions;
- (unsigned int)depthPixelFormat;
- (bool)filteringEnabled;
- (id)initWithRGBSensorConfiguration:(id)arg1 timeOfFlightSensorConfiguration:(id)arg2 rgbCameraHorizontalSensorBinningFactor:(int)arg3 rgbCameraVerticalSensorBinningFactor:(int)arg4 filteringEnabled:(bool)arg5 depthPixelFormat:(unsigned int)arg6 depthOutputDimensions:(struct { int x1; int x2; })arg7 videoInputDimensions:(struct { int x1; int x2; })arg8 timeOfFlightCameraType:(int)arg9;
- (int)rgbCameraHorizontalSensorBinningFactor;
- (int)rgbCameraVerticalSensorBinningFactor;
- (id)rgbSensorConfiguration;
- (int)timeOfFlightCameraType;
- (id)timeOfFlightSensorConfiguration;
- (struct { int x1; int x2; })videoInputDimensions;

@end
