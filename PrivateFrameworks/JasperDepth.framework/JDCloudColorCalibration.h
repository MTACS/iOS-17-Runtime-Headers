
@interface JDCloudColorCalibration : NSObject {
    DNNEngine * _DNNEngine;
    unsigned int  _aggregationCounter;
    float  _alphaCorrectionFactor;
    struct { 
        float backendRunTimeMinMsec; 
        float backendRunTimeMaxMsec; 
        float backendRunTimeAvgMsec; 
        float backendRunTimeTotalMsec; 
        float frontendRunTimeTotalMsec; 
        unsigned int numJasperPointsTotal; 
        float numJasperPointsAvg; 
        unsigned int numOfFrames; 
    }  _analytics;
    struct CGSize { 
        double width; 
        double height; 
    }  _backendNetworkInputDimensions;
    unsigned int  _backendNetworkInputPixelFormat;
    float * _backendResultAggregated;
    JDJasperCameraSystemCalibrationData * _calib;
    JDCloudColorCalibrationController * _controller;
    NSString * _currentSessionDirPath;
    bool  _debugOutputEnabled;
    unsigned int * _featureVectorDim;
    unsigned int  _featureVectorSize;
    unsigned long long  _gcdOutputImageDimensions;
    bool  _isMemoryDumpEnable;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _jasperFOVInImage;
    unsigned int  _numInputAggregated;
    float  _scale;
}

@property (nonatomic, retain) DNNEngine *DNNEngine;
@property (nonatomic) unsigned int aggregationCounter;
@property (nonatomic) float alphaCorrectionFactor;
@property (nonatomic) struct { float x1; float x2; float x3; float x4; float x5; unsigned int x6; float x7; unsigned int x8; } analytics;
@property (nonatomic) struct CGSize { double x1; double x2; } backendNetworkInputDimensions;
@property (nonatomic) unsigned int backendNetworkInputPixelFormat;
@property (nonatomic) float*backendResultAggregated;
@property (nonatomic, retain) JDJasperCameraSystemCalibrationData *calib;
@property (nonatomic, retain) JDCloudColorCalibrationController *controller;
@property (nonatomic, retain) NSString *currentSessionDirPath;
@property (nonatomic) bool debugOutputEnabled;
@property (nonatomic) unsigned int*featureVectorDim;
@property (nonatomic) unsigned int featureVectorSize;
@property (nonatomic) unsigned long long gcdOutputImageDimensions;
@property (nonatomic) bool isMemoryDumpEnable;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } jasperFOVInImage;
@property (nonatomic) unsigned int numInputAggregated;
@property (nonatomic) float scale;

+ (unsigned long long)gcd:(unsigned long long)arg1 and:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)DNNEngine;
- (unsigned int)aggregationCounter;
- (float)alphaCorrectionFactor;
- (struct { float x1; float x2; float x3; float x4; float x5; unsigned int x6; float x7; unsigned int x8; })analytics;
- (struct CGSize { double x1; double x2; })backendNetworkInputDimensions;
- (unsigned int)backendNetworkInputPixelFormat;
- (float*)backendResultAggregated;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateJasperFOVInImageWithJasperCalibration:(id)arg1 withCameraCalibration:(id)arg2 withOriginalImageWidth:(unsigned long long)arg3 withOriginalImageHeight:(unsigned long long)arg4 forOutputImageWidth:(unsigned long long)arg5 forOutputImageHeight:(unsigned long long)arg6;
- (id)calib;
- (id)calibratePointCloud:(id)arg1 andImage:(struct __CVBuffer { }*)arg2 analyticsData:(id*)arg3 debugInfo:(id*)arg4;
- (id)calibratePointCloud:(id)arg1 andImage:(struct __CVBuffer { }*)arg2 calibration:(id)arg3 analyticsData:(id*)arg4 debugInfo:(id*)arg5;
- (id)controller;
- (int)createPreprocessed:(struct __CVBuffer { }*)arg1 andJDPC:(id)arg2 cropWidth:(unsigned long long)arg3 cropHeight:(unsigned long long)arg4 scale:(double)arg5 outputRGB:(struct __CVBuffer {}**)arg6 outputPC:(float**)arg7 outputPCSize:(unsigned int*)arg8;
- (struct __CVBuffer { }*)createPreprocessedColorImage:(struct __CVBuffer { }*)arg1 calibration:(id)arg2;
- (int)createPreprocessedFilteredJasperSpots:(id)arg1 outputPC:(float**)arg2 outputPCSize:(unsigned int*)arg3;
- (id)currentSessionDirPath;
- (void)dealloc;
- (bool)debugOutputEnabled;
- (unsigned int*)featureVectorDim;
- (unsigned int)featureVectorSize;
- (unsigned long long)gcdOutputImageDimensions;
- (id)getInternalState;
- (id)init:(unsigned int)arg1;
- (id)initWithSystemCalibrationData:(id)arg1 aggregationSize:(int)arg2;
- (bool)isCloudColorCalibrationInDebug;
- (bool)isMemoryDumpEnable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })jasperFOVInImage;
- (void)memoryDumpBinary:(char *)arg1 sizeInBytes:(unsigned int)arg2 withNameExtension:(id)arg3;
- (void)memoryDumpImage:(struct __CVBuffer { }*)arg1 withNameExtension:(id)arg2;
- (void)memoryDumpJasper:(id)arg1;
- (void)memoryDumpResultOutcome:(id)arg1;
- (unsigned int)numInputAggregated;
- (void)resetDebugFolder;
- (void)resetSession;
- (void)rgbj_calibration_log:(id)arg1 isErrorMessage:(bool)arg2;
- (bool)runController:(struct __CVBuffer { }*)arg1 jdpc:(id)arg2;
- (int)runRGBJNet:(struct __CVBuffer { }*)arg1 pointCloud:(float*)arg2 pointCloudSize:(unsigned int)arg3 result:(struct JDCloudColorCalibrationResult { int x1; float x2; float x3; float x4; }*)arg4 poolLogic:(bool)arg5 analyticsData:(id*)arg6;
- (int)runRGBJNet:(struct __CVBuffer { }*)arg1 pointCloud:(float*)arg2 pointCloudSize:(unsigned int)arg3 resultOutcome:(id*)arg4 analyticsData:(id*)arg5;
- (int)runRGBJNet:(struct __CVBuffer { }*)arg1 pointCloud:(float*)arg2 pointCloudSize:(unsigned int)arg3 resultOutcome:(id*)arg4 poolLogic:(bool)arg5 analyticsData:(id*)arg6;
- (float)scale;
- (void)setAggregationCounter:(unsigned int)arg1;
- (void)setAlphaCorrectionFactor:(float)arg1;
- (void)setAnalytics:(struct { float x1; float x2; float x3; float x4; float x5; unsigned int x6; float x7; unsigned int x8; })arg1;
- (void)setBackendNetworkInputDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setBackendNetworkInputPixelFormat:(unsigned int)arg1;
- (void)setBackendResultAggregated:(float*)arg1;
- (void)setCalib:(id)arg1;
- (void)setController:(id)arg1;
- (void)setCurrentSessionDirPath:(id)arg1;
- (void)setDNNEngine:(id)arg1;
- (void)setDebugOutputEnabled:(bool)arg1;
- (void)setFeatureVectorDim:(unsigned int*)arg1;
- (void)setFeatureVectorSize:(unsigned int)arg1;
- (void)setGcdOutputImageDimensions:(unsigned long long)arg1;
- (bool)setInternalState:(id)arg1;
- (void)setIsMemoryDumpEnable:(bool)arg1;
- (void)setJasperFOVInImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNumInputAggregated:(unsigned int)arg1;
- (void)setScale:(float)arg1;

@end
